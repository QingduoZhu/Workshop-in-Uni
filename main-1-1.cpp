#include <iostream>
extern int* readNumbers();
extern void printNumbers(int* numbers, int length);
int main()
{
	int* array = new int[10];
	array = readNumbers();
	printNumbers(array, 10);
	delete[] array;
	return 0;
}