#include <iostream>
extern void print_summed(int array1[3][3], int array2[3][3]);
int main()
{
	int arr1[3][3];
	int arr2[3][3];
	for (int i = 1; i < 3; i++)
	{
		for (int j = 1; j < 3; j++)
		{
			std::cin >> arr1[i][j];
		}
	}
	for (int i = 1; i < 3; i++)
	{
		for (int j = 1; j < 3; j++)
		{
			std::cin >> arr2[i][j];
		}
	}
	print_summed(arr1, arr2);
	return 0;
}