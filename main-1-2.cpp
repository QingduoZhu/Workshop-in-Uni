#include <iostream>
extern int is_identity(int array[10][10]);
int main()
{
	int arr[10][10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			std::cin >> arr[i][j];
		}
	}
	int a = is_identity(arr);
	if (a == -1)
	{
		return 0;
	}
	else
	{
		std::cout << "it is identity";
	}
	return 1;
}