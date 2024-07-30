#include <iostream>
#include <string>
using namespace std;
int main()
{
	int number;
	int count1 = 0;
	int loop;
	int remainder;
	int binary = 0;
	int a = 1;
	cout << "type in the number that you want to convert to binary";
	cin >> number;
	loop = number;
	while (loop!=0)
	{
		if (loop % 2 != 0)
		{
			remainder = 1;
			loop = (loop -1 ) / 2;
		}
		else
		{
			remainder = 0;
			loop = loop / 2;
		}
		binary = binary + remainder * a;
		a = a * 10;
		count1++;
		cout << count1 << endl;
	}
	cout << binary;
	return 0;

}