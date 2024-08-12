#include <iostream>
extern int* readNumbers();
bool equalsArray(int* numbers1, int* numbers2, int length);
int main()
{
	int length;
	int* array2 = new int[10];
	int* array1 = new int[10];
	std::cin >> length;
	array1 = readNumbers();
	array2 = readNumbers();
	if(equalsArray(array1, array2, length)==true)
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
	delete[] array1;
	delete[] array2;
	return 0;
}