#include <iostream>
void print_summed(int array1[3][3], int array2[3][3])
{
	for (int i = 1; i < 3; i++)
	{
		for (int j = 1; j < 3; j++)
		{
			std::cout << array1[i][j] + array2[i][j];
			if (j == 3)
			{
				std::cout << std::endl;
			}
		}
	}
}