#include "Span.hpp"

Span::Span():n(0){
	
}
Span::Span(unsigned int N): n(N), vect(0)
{
	
}

Span::Span(const Span &s)
{
	*this = s;
}

Span &Span::operator=(const Span &s)
{
	if (this == &s)
		return (*this);
	n = s.n;
	vect = s.vect;
	return (*this);
}

Span::~Span()
{
	
}

void Span::addNum(int num) 
{
    if (vect.size() >= n)
        throw std::out_of_range("Vector is full");
    vect.push_back(num);
}

int Span::shortestSpan() const
{
	if (vect.size() < 2)
		throw std::out_of_range("Not enough elements");
	std::vector<int> temp = vect;
	sort(temp.begin(), temp.end());
	int min_diff = std::numeric_limits<int>::max();
	for (size_t i = 0; i < temp.size() - 1; i++)
	{
		if (temp[i + 1] - temp[i] < min_diff)
		{
			min_diff = temp[i + 1] - temp[i];
		}
	}
	return (min_diff);
}

int Span::longestSpan()const
{
	std::vector<int> temp = vect;
	if (vect.size() <= 1)
		throw std::out_of_range("Not enough elements");
	sort(temp.begin(), temp.end());
	return (temp.back() - temp.front());
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector<int> temp(begin,end);
	if (temp.size() > (n - vect.size()))
		throw std::out_of_range("range is too big, there is not enough space");
	copy(temp.begin(), temp.end(), std::back_inserter(vect));
}

void Span::printvec() const
{
	if (vect.empty())
	{
		std::cout << "empty vector \n";
		return;
	}
	for (size_t i = 0; i < vect.size(); ++i)
		std::cout << "[" << vect[i] <<"] ";
	std::cout << std::endl;
}