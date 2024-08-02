#include <iostream>
extern void print_scaled(int array[3][3], int scale);
int main()
{
	int arr[3][3];
	int scale;
	std::cin >> scale;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cin >> arr[i][j];
		}
	}
	print_scaled(arr,scale);
	return 0;
}