#include <iostream>
extern int* readNumbers();
extern int* reverseArray(int* numbers1, int length);
extern bool equalsArray(int* numbers1, int* numbers2, int length);
int main()
{
	int* reverse = new int[10];
	int* array = new int[10];
	array = readNumbers();
	reverse = reverseArray(array, 10);
	if (equalsArray(array, reverse, 10) == true)
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
	delete[] array;
	return 0;
}