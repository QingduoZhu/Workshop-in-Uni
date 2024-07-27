#include <iostream>
bool is_descending(int array[], int n)
{
    if (n<=0)
    {
        return -1;
    }
    else
    {
    int count = 0;
    int a = array[n];
    for (int i = n;i>0;i--)
    {
        if (array[i]>=a)
        {
            a = array[i];
            count++;
        }
        else
        {
            break;
        }
    }
    if(count!=n)
    {
        return -1;
    }
    else
    {
        return 0;
    }
    }
}