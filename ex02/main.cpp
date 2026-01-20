#include "Array.hpp"
#include <iostream>

int main()
{
	Array <int>empty;

	std::cout << "Empty array size: " << empty.size() << std::endl;

///////////////////////////////////////////////////////////////////////////////
	std::cout << std::endl;	


	Array <int>int_array((unsigned int)5);

	std::cout << "Array size: " << int_array.size() << std::endl;
	for (size_t i = 0; i < int_array.size(); i++)
		std::cout << int_array[i] << " ";
	std::cout << std::endl;

///////////////////////////////////////////////////////////////////////////////
	std::cout << std::endl;	


	int *a = new int();

	std::cout << *a << std::endl;
	delete a;

///////////////////////////////////////////////////////////////////////////////
	std::cout << std::endl;	


	Array <int>testI(3);
	testI[0] = 1;
	testI[1] = 2;
	testI[2] = 3;
	Array <int>testII(testI);
	testII[0] = 4;
	testII[1] = 5;
	testII[2] = 6;
	Array <int>testIII = testI;
	testIII[0] = 7;
	testIII[1] = 8;
	testIII[2] = 9;
	for (size_t i = 0; i < testI.size(); i++)
		std::cout << testI[i] << " ";
	std::cout << std::endl;
	for (size_t i = 0; i < testI.size(); i++)
		std::cout << testII[i] << " ";
	std::cout << std::endl;
	for (size_t i = 0; i < testI.size(); i++)
		std::cout << testIII[i] << " ";
	std::cout << std::endl;	
	
///////////////////////////////////////////////////////////////////////////////
	std::cout << std::endl;


	try
	{
		std::cout << int_array[10] << std::endl;
	}
	catch (const std::out_of_range &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

///////////////////////////////////////////////////////////////////////////////
	std::cout << std::endl;

	std::cout << int_array.size() << std::endl;
}