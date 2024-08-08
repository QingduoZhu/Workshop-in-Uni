#include <iostream>
extern double* duplicateArray(double* array, int size);
int main()
{
	int l;
	double array[9999];
	double* array2[9999];
	std::cin >> l;
	for	(int i = 0; i < l; i++)
	{
		std::cin >> array[i];
	}
	*array2 = duplicateArray(array, l);
	std::cout << "Duplicated:";
	for (int i = 0; i < l; i++)
	{
		std::cout << array[i]<<" ";
	}
	return 0;
}