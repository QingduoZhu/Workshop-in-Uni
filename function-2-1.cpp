#include <iostream>
#include <string>
void print_binary_string(std::string decimal_number)
{
	using namespace std;
	int number;
	int count1 = 0;
	int loop;
	int remainder;
	int binary = 0;
	int a = 1;
	int decimal_number1;
	decimal_number1 = std::stoi(decimal_number);
	number = decimal_number1;
	loop = number;
	while (loop != 0)
	{
		if (loop % 2 != 0)
		{
			remainder = 1;
			loop = (loop - 1) / 2;
		}
		else
		{
			remainder = 0;
			loop = loop / 2;
		}
		binary = binary + remainder * a;
		a = a * 10;
		count1++;
	}
	cout << binary;
}