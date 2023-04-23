// main.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "math.h"

int main()
{
	fibonacci_init(1, 1);
	do
	{
		std::cout	<< fibonacci_index() 	<< ": "
				<< fibonacci_current() 	<< std::endl;
	} while (fibonacci_next());
	std::cout << fibonacci_index() + 1 << 	" Значения последовательности Фибоначчи вписываются в "
						"unsigned 64-bit integer." << std::endl;
}
