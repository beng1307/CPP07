#include <iostream>
#include "whatever.hpp"

int main( void )
{
	int 		intI = 1;
	int 		intII = 2;
	std::string stringI = "Hello World";
	std::string stringII = "Lorem Ipsum";

///////////////////////////////////////////////////////////////////////////////
	std::cout << std::endl;


	::swap( intI, intII );

	std::cout << "intI = " << intI << ", intII = " << intII << std::endl;
	std::cout << "min(intI,intII) = " << ::min(intI, intII) << std::endl;
	std::cout << "max(intI,intII) = " << ::max(intI, intII) << std::endl;

///////////////////////////////////////////////////////////////////////////////
	std::cout << std::endl;

	
	::swap(stringI, stringII);

	std::cout << "stringI = " << stringI << ", stringII = " << stringII << std::endl;
	std::cout << "min(stringI, stringII) = " << ::min(stringI, stringII) << std::endl;
	std::cout << "max(stringI, stringII) = " << ::max(stringI, stringII) << std::endl;
}