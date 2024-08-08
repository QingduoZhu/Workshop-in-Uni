#include <iostream>
extern void modifyArray(double* array, int size, double value);
int main()
{
	int l;
	double array[9999];
	double value;
	std::cin >> l;
	for (int i = 0; i < l; i++)
	{
		std::cin >> array[i];
	}
	std::cin >> value;
	for (int i = 0; i < l; i++)
	{
		std::cout << array[i];
	}
	return 0;
}