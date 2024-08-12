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

int* reverseArray(int* numbers1, int length)
{
	int* reverse = new int[length];
	for (int i = 0; i < length; i++)
	{
		reverse[length -1 - i] = numbers1[i];
	}
	return reverse;
}

bool equalsArray(int* numbers1, int* numbers2, int length)
{
	for (int i = 0; i < length; i++)
	{
		if (numbers1[i] != numbers2[i])
		{
			return false;
		}
	}
	return true;
}