#include "Array.hpp"
#include <iostream>
#include <string>

int main()
{
	std::cout << "=== Testing Default Constructor ===" << std::endl;
	{
		Array<int> empty;
		std::cout << "Empty array size: " << empty.size() << std::endl;
	}

	std::cout << "\n=== Testing Parameterized Constructor ===" << std::endl;
	{
		Array<int> arr(5);
		std::cout << "Array size: " << arr.size() << std::endl;
		std::cout << "Array elements (initialized to 0): ";
		for (unsigned int i = 0; i < arr.size(); i++)
			std::cout << arr[i] << " ";
		std::cout << std::endl;
	}

	std::cout << "\n=== Testing Copy Constructor ===" << std::endl;
	{
		Array<int> arr1(3);
		arr1[0] = 10;
		arr1[1] = 20;
		arr1[2] = 30;
		
		Array<int> arr2(arr1);
		std::cout << "Original: ";
		for (unsigned int i = 0; i < arr1.size(); i++)
			std::cout << arr1[i] << " ";
		std::cout << "\nCopy: ";
		for (unsigned int i = 0; i < arr2.size(); i++)
			std::cout << arr2[i] << " ";
		std::cout << std::endl;
		
		arr2[0] = 99;
		std::cout << "After modifying copy[0] = 99:" << std::endl;
		std::cout << "Original[0]: " << arr1[0] << std::endl;
		std::cout << "Copy[0]: " << arr2[0] << std::endl;
	}

	std::cout << "\n=== Testing Assignment Operator ===" << std::endl;
	{
		Array<int> arr1(3);
		arr1[0] = 1;
		arr1[1] = 2;
		arr1[2] = 3;
		
		Array<int> arr2;
		arr2 = arr1;
		std::cout << "Size after assignment: " << arr2.size() << std::endl;
	}

	std::cout << "\n=== Testing Out of Bounds Access ===" << std::endl;
	{
		Array<int> arr(3);
		try {
			std::cout << "Accessing index 5 in array of size 3..." << std::endl;
			arr[5] = 100;
		} catch (std::exception &e) {
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	}

	std::cout << "\n=== Testing Different Types ===" << std::endl;
	{
		Array<std::string> strArr(2);
		strArr[0] = "Hello";
		strArr[1] = "World";
		std::cout << "String array: " << strArr[0] << " " << strArr[1] << std::endl;
	}

	return 0;
}