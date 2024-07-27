#include <iostream>
int min_element(int array[], int n)
{
    int max;
    if (n<1)
    {
        return 0;
    }
    else
    {
        max = array[1];
        for (int i = 0;i<n;i++)
        {
            if (array[i]>max)
            max = array[i];
        }
        return max;
    }
}