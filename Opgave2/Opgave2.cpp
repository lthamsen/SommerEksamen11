#include <iostream>
#include <iomanip>


#define SIZE 10

void main()
{
	float array[SIZE];

	for (size_t index = 0; index < SIZE; index++)
		array[index] = 5.0;

	for (size_t index = 0; index < SIZE; index++)
		std::cout << std::fixed << std::setprecision(1) << array[index] << std::endl;
}