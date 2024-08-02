#include <iostream>
extern int binary_to_int(int binary_digit[], int number_of_digit);
int main()
{
	std::cout << "input";
	int length;
	int array[32];
	int interger;
	std::cin >> length;
	for (int i = 0; i < length; i++)
	{
		std::cin >> array[i];
	}
	interger = binary_to_int(array, length);
	std::cout << interger;
	return 0;
}
