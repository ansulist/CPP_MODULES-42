#ifndef SPAN_H
# define SPAN_H
#include <algorithm>
#include <vector>
#include <iostream>
#include <stdexcept>
#include <limits>

class Span
{
	private:
		unsigned int n;
		Span();
	public:
		std::vector<int> vect;
		Span(unsigned int N);
		Span(const Span &s);
		Span &operator=(const Span &s);
        ~Span();
        void addNum(int num);
        int shortestSpan() const;
        int longestSpan()const;
        void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        void printvec() const;
};

#endif