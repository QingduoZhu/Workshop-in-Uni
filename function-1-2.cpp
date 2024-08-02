#include <iostream>
int is_identity(int array[10][10])
{
	bool a;
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			if (i == j)
			{
				if (array[i][j] != 1)
				{
					return -1;
				}
			}
			else
			{
				if (array[i][j] != 0)
				{
					return -1;
				}
			}
		}
		return 0;
	}
}