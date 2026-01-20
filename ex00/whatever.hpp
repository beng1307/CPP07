#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename Type>
void	swap(Type &a, Type &b)
{
	Type	c;

	c = a;
	a = b;
	b = c;
}

template<typename Type>
Type	min(Type &a, Type &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template<typename Type>
Type	max(Type &a, Type &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

#endif