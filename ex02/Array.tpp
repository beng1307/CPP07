#include <cstddef>
#include <stdexcept>

template<typename T>
Array<T>::Array(): elements(NULL), array_size(0)
{
	return ;
}

template<typename T>
Array<T>::Array(unsigned int n): elements(new T[n]), array_size(n)
{
	return ;
}

template<typename T>
Array<T>::Array(const Array &other)
{
	array_size = other.array_size;
	elements = new T[array_size];
	for (size_t i = 0; i < array_size; i++)
		elements[i] = other.elements[i];
}

template<typename T>
Array<T>	&Array<T>::operator=(const Array &other)
{
	if (this != &other)
	{
		delete[] elements;
		array_size = other.array_size;
		elements = new T[array_size];
		for (size_t i = 0; i < array_size; i++)
			elements[i] = other.elements[i];
	}
	return (*this);
}

template<typename T>
T	&Array<T>::operator[](unsigned int index)
{
	if (index >= array_size)
		throw std::out_of_range("Index out of bounds!");
	return (elements[index]);
}

template<typename T>
Array<T>::~Array()
{
	delete[] elements;
}

template<typename T>
size_t	Array<T>::size() const
{
	return (array_size);
}