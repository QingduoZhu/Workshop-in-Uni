#include <iostream>;
int* readNumbers()
{
	int* array = new int[10];
	for (int i = 0; i < 10; i++)
	{
		std::cin >> array[i];
	}
	return array;
}


void printNumbers(int* numbers, int length)
{
	for (int i = 0; i < length; i++)
	{
		std::cout << i << " " << numbers[i] << std::endl;
	}
}
int secondSmallestSum(int* numbers, int length)
{
	int count = 0;
	int a = 0;
	int* storge = new int[100];
	for (int i = 0; i < length; i++)
	{
		for (int j = i; j < length; j++)
		{
			storge[count] = numbers[i] + numbers[j];
			count++;
		}
	}
	for (int i = 0; i < count; i++)
	{
		std::cout << storge[i] << " ";
	}
	return 0;
}