#include <cstddef>

template<typename T>
Array<T>::Array(): elements(NULL), array_size(0)
{
	return ;
}

template<typename T>
Array<T>::Array(unsigned int array_size): elements(new T[array_size]), array_size(array_size)
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
Array<T>::~Array()
{
	delete[] elements;
}

template<typename T>
size_t	Array<T>::size() const
{
	return (array_size);
}