#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <cstddef>

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
		Array	&operator=(const Array &other);
		T		&operator[](unsigned int index);
		~Array();
		size_t	size() const;
};

#include "Array.tpp"

#endif