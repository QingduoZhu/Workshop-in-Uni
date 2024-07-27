#include <iostream>
int count_evens(int number)
{
    int num = 0;
    int count = 1;
    if (number < 1)
    {
        return 0;
    }
    else
    {
        while(1)
        {
            count = count + 2;
            if (count>number)
            {
                break;
            }
            num++;
        }
        return num;
    }
}