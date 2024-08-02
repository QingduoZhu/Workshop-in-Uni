#include <iostream>
extern int sum_diagonal(int array[4][4]);
int main()
{
	int sum;
	int array1[4][4];
	std::cout << "input a 4x4 matrix";
	for (int i = 1; i < 4; i++)
	{
		for (int j = 1; j < 4; j++)
		{
			std::cin >> array1[i][j];
		}
	}
	sum = sum_diagonal(array1);
	std::cout << sum;
	return 0;
}