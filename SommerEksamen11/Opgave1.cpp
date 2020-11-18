#include <iostream>

void main()
{
	for (size_t i = 0; i < 100; i++)
	{
		if (i % 2 != 0)
			std::cout << i << std::endl;
	}
}