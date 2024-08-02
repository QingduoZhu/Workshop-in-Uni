#include <iostream>
#include <string>
extern void print_binary_string(std::string decimal_number);
int main()
{
	std::string str;
	std::cin >> str;
	print_binary_string(str);
	return 0;
}