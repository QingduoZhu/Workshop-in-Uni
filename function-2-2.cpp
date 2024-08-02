#include <iostream>
int binary_to_int(int binary_digit[], int number_of_digit)
{
	int sum = 0;
	int count = 0;
	for (int i = 0; i < number_of_digit; i++)
	{
		if (binary_digit[i] = 1)
		{
			sum = sum + 2 ^ (number_of_digit-i-1);
		}
		count++;
	}
	return sum-count;
}