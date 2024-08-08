#include <iostream>
extern double arrayMin(double* array, int size);
int main()
{
	int l;
	double min;
	double array[9999];
	std::cin >> l;
	for (int i = 0; i < l; i++)
	{
		std::cin >> array[i];
	}
	min = arrayMin(array, l);
	std::cout << min;
}