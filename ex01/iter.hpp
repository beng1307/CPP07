#ifndef ITER_HPP
# define ITER_HPP

template<typename Type, typename Function>
void	iter(Type *address, const size_t length, Function function)
{

	for (size_t i = 0; i < length; i++)
		function(address[i]);
}

template<typename Type>
void	print(const Type &to_print)
{
	std::cout << to_print << std::endl;
}

#endif