#include <iostream>
#include "Array.hpp"
#include <cstdlib>
#include <cstddef>
#include <ctime>

#define MAX_VAL 750

int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
	    const int value = rand();
	    numbers[i] = value;
	    mirror[i] = value;
	}
	//SCOPE
	{
	    Array<int> tmp = numbers;
	    Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
	    if (mirror[i] != numbers[i])
	    {
	        std::cerr << "didn't save the same value!!" << std::endl;
	        return 1;
	    }
	}
	try
	{
	    numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
	    std::cerr << e.what() << '\n';
	}
	try
	{
	    numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
	    std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
	    numbers[i] = rand();
	}
	delete [] mirror;//
	return 0;
}


/*MAIN INT*/
// int main(int, char**)
// {
// 	Array<int>	arr(5);
// 	try
// 	{
// 		for (unsigned int i = 0; i < arr.size(); i++)
// 		{
// 		std::cout << "array = " << arr[i] << std::endl;
// 		arr[i] = i;
// 		std::cout << "array = " << arr[i] << std::endl;
// 		}
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// 	std::cout << std::endl;
// 	Array<int>	arr2(0);
// 	try
// 	{
// 		std::cout << "empty array = " << arr2[0] << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// 	std::cout << std::endl;
// 	try
// 	{
// 		arr2 = arr;
// 		for (unsigned int i = 0; i < arr.size(); i++)
// 		{
// 		std::cout << "array2 = " << arr2[i] << std::endl;

// 		}
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// 	std::cout << std::endl;
// 	Array<int>	arr3(arr2);
// 	try
// 	{
// 		for (unsigned int i = 0; i < arr3.size(); i++)
// 		{
// 		std::cout << "array3 init= " << arr3[i] << std::endl;
// 		arr3[i] = 42 + i;
// 		std::cout << "array3 after= " << arr3[i] << std::endl;
// 		std::cout << "array2 = " << arr2[i] << std::endl;

// 		}
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// }

/*MAIN DOUBLE*/

// int main(int, char**)
// {
// 	Array<double>	arr(5);
// 	try
// 	{
// 		for (unsigned int i = 0; i < arr.size(); i++)
// 		{
// 		std::cout << "array = " << arr[i] << std::endl;
// 		arr[i] = 1.5 + i;
// 		std::cout << "array = " << arr[i] << std::endl;
// 		}
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
	// std::cout << std::endl;
// 	Array<double>	arr2(0);
// 	try
// 	{
// 		std::cout << "empty array = " << arr2[0] << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// 	std::cout << std::endl;
// 	try
// 	{
// 		arr2 = arr;
// 		for (unsigned int i = 0; i < arr.size(); i++)
// 		{
// 		std::cout << "array2 = " << arr2[i] << std::endl;

// 		}
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
	// std::cout << std::endl;
// 	Array<double>	arr3(arr2);
// 	try
// 	{
// 		for (unsigned int i = 0; i < arr3.size(); i++)
// 		{
// 		std::cout << "array3 init= " << arr3[i] << std::endl;
// 		arr3[i] = 42.6 + i;
// 		std::cout << "array3 after= " << arr3[i] << std::endl;
// 		std::cout << "array2 = " << arr2[i] << std::endl;

// 		}
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// }


/*MAIN CHAR*/

// int main(int, char**)
// {
// 	Array<char>	arr(5);
// 	try
// 	{
// 		const char *str = "hello";
// 		for (unsigned int i = 0; i < arr.size(); i++)
// 		{
// 		std::cout << "array = " << arr[i] << std::endl;
// 		arr[i] = str[i];
// 		std::cout << "array = " << arr[i] << std::endl;
// 		}
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
	// std::cout << std::endl;
// 	Array<char>	arr2(0);
// 	try
// 	{
// 		std::cout << "empty array = " << arr2[0] << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
	// std::cout << std::endl;
// 	try
// 	{
// 		arr2 = arr;
// 		for (unsigned int i = 0; i < arr.size(); i++)
// 		{
// 		std::cout << "array2 = " << arr2[i] << std::endl;

// 		}
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
	// std::cout << std::endl;
// 	Array<char>	arr3(arr2);
// 	try
// 	{
// 		const char *str = "totoo";
// 		for (unsigned int i = 0; i < arr3.size(); i++)
// 		{
// 		std::cout << "array3 init= " << arr3[i] << std::endl;
// 		arr3[i] = str[i];
// 		std::cout << "array3 after= " << arr3[i] << std::endl;
// 		std::cout << "array2 = " << arr2[i] << std::endl;

// 		}
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// }
