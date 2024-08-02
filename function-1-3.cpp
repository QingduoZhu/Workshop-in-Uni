#include <iostream>
void count_digits(int array[4][4])
{
	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, l = 0, m = 0;
	for (int i = 0;i<4;i++)
	{
		for (int j = 0; j < 4; j++)
		{
			switch (array[i][j])
			{
			case 0:
				a++;
				break;
			case 1:
				b++;
				break;
			case 2:
				c++;
				break;
			case 3:
				d++;
				break;
			case 4:
				e++;
				break;
			case 5:
				f++;
				break;
			case 6:
				g++;
				break;
			case 7:
				h++;
				break;
			case 8:
				l++;
				break;
			case 9:
				m++;
				break;
			}
				
		}
	}
	printf("0:%d;1:%d;2:%d;3:%d;4:%d;5:%d;6:%d;7:%d;8:%d;9:%d;", a, b, c, d, e, f, g, h, l, m);
}