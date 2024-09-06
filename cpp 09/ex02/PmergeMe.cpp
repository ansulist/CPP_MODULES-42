#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}

PmergeMe::~PmergeMe()
{

}
PmergeMe &PmergeMe::operator=(const PmergeMe &copy)
{
	if (this != &copy)
	{
		vec = copy.vec;
		lstt = copy.lstt;
	}
	return *this;
}

PmergeMe::PmergeMe(const PmergeMe &other)
{
	*this = other;
}

int PmergeMe::check_nbr(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (!isdigit(str[i]))
            return 0;
        i++;
    }
    return 1;
}

int PmergeMe::atoii(const char* str)
{
    int result = 0;
    int sign = 1;
    const char* ptr = str;

    while (*ptr == ' ' || *ptr == '\t')
        ++ptr;
    if (*ptr == '-') {
        sign = -1;
        ++ptr;
    }
    else if (*ptr == '+') {
        ++ptr;
    }
    while (*ptr >= '0' && *ptr <= '9')
	{
        result = result * 10 + (*ptr - '0');
        ++ptr;
    }
    return result * sign;
}

void merge_vec(std::vector<int>& vec, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; ++i)
    {
        L[i] = vec[left + i];
    }

    for (int j = 0; j < n2; ++j)
    {
        R[j] = vec[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            vec[k] = L[i];
            i++;
        }
        else
        {
            vec[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        vec[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        vec[k] = R[j];
        j++;
        k++;
    }
}

void vector_sorting_and_merge(std::vector<int>& vec, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        vector_sorting_and_merge(vec, left, mid);
        vector_sorting_and_merge(vec, mid + 1, right);
        merge_vec(vec, left, mid, right);
    }
}

// ----> list algorithm
std::list<int> PmergeMe::merge_lst(std::list<int> &left, std::list<int> &right)
{
    std::list<int> result;

    while (!left.empty() && !right.empty())
    {
        if (left.front() <= right.front())
        {
            result.push_back(left.front());
            left.pop_front();
        }
        else
        {
            result.push_back(right.front());
            right.pop_front();
        }
    }
    while (!left.empty())
    {
        result.push_back(left.front());
        left.pop_front();
    }

    while (!right.empty())
    {
        result.push_back(right.front());
        right.pop_front();
    }
    return result;
}

void PmergeMe::sort_lst(std::list<int> &list)
{
    if (list.empty() || list.size() == 1)
        return;
    std::list<int> left, right;
    size_t count = 0;
    for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
    {
        if (count < list.size() / 2)
        {
            left.push_back(*it);
        }
        else
        {
            right.push_back(*it);
        }
        count++;
    }
    sort_lst(left);
    sort_lst(right);
    list = merge_lst(left, right);
}

void PmergeMe::check_args_and_push(char **av)
{
    int num;

    // Loop through all arguments starting from av[1]
    for (int i = 1; av[i]; i++)
    {
        // Check if the argument contains space-separated numbers
        if (strchr(av[i], ' '))
        {
            char* token = strtok(av[i], " ");
            while (token != NULL)
            {
                if (check_nbr(token))
                {
                    num = atoii(token);
                    vec.push_back(num);
                    lstt.push_back(num);
                }
                else
                {
                    throw std::invalid_argument("Error in string numbers");
                }
                token = strtok(NULL, " ");
            }
        }
        else if (check_nbr(av[i]))  // If the argument is a single number
        {
            num = atoii(av[i]);
            vec.push_back(num);
            lstt.push_back(num);
        }
        else
        {
            throw std::invalid_argument("Error in other arguments");
        }
    }
}

void PmergeMe::printsss(std::string str)
{
	std::cout << str;
    if (vec.size() <= (size_t)5)
    {
        for (size_t i = 0; i < vec.size(); i++)
            std::cout << vec[i] << " ";
        std::cout << std::endl;
    }
    else
    {
        for (size_t i = 0; i < 5; i++)
            std::cout << vec[i] << " ";
        std::cout << "[...]" << std::endl;
    }
}

double PmergeMe::sorting_all(char **av)
{
	std::clock_t s, e;
    double vecTime, listTime;
    
	check_args_and_push(av);
	printsss("Before: ");
	s = std::clock();
    vector_sorting_and_merge(vec, 0, vec.size());
    e = std::clock();
    vecTime = (double)(e - s) / CLOCKS_PER_SEC * 1000;
    s = std::clock();
    sort_lst(lstt);
    e = std::clock();
    listTime = (double)(e - s) / CLOCKS_PER_SEC * 1000;
	printsss("after: ");
	std::cout << "Time to process a range of " << vec.size() << " elements with std::vector: " << std::setprecision(5) << vecTime << " us" << std::endl;
    std::cout << "Time to process a range of " << vec.size() << " elements with std::list: " << std::setprecision(5) << listTime << " us" << std::endl;
    return 0;
}