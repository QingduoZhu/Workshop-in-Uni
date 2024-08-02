#include <iostream>
void print_scaled(int array[3][3], int scale)
{
	for (int i = 1; i < 3; i++)
	{
		for (int j = 1; j < 3; j++)
		{
			std::cout << array[i][j] * scale;
			if (j == 3)
			{
				std::cout << std::endl;
			}
		}
	}
}