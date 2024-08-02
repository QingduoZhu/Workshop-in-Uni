#include <iostream>
extern void count_digits(int array[4][4]);
int main()
{
	int arr[4][4];
	for (int i = 1; i < 4; i++)
	{
		for (int j = 1; j < 4;j++)
		{
			std::cin >> arr[i][j];
		}
	}
	count_digits(arr);
	return 0;
}