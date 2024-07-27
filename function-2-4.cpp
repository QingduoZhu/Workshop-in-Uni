#include <iostream>
bool is_ascending(int array[], int n)
{
    if (n<=0)
    {
        return -1;
    }
    else
    {
    int count = 0;
    int a = array[0];
    for (int i = 0;i<n;i++)
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