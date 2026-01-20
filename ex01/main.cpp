#include <iostream>
#include "iter.hpp"

int main()
{
	int	number[5] = {1, 2, 3, 4, 5};

	iter(number, 5, print<int>);

	std::string	strings[3] = {"Hello", "World", "!"};

	iter(strings, 3, print<std::string>);

	iter(strings, 3, print<const std::string>);
}