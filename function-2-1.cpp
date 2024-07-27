#include <iostream>
int min_element(int array[], int n)
{
    int min;
    if (n<1)
    {
        return 0;
    }
    else
    {
        min = array[1];
        for (int i = 0;i<n;i++)
        {
            if (array[i]<min)
            min = array[i];
        }
        return min;
    }
}