#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cstddef>
#include "Array.tpp"

template<typename T>
class Array
{
	private:
		T		*elements;
		size_t	array_size;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array &other);
		Array &operator=(const Array &other);
		~Array();
		size_t	size() const;
};

#endif