#include <iostream>
double array_mean(int array[], int n)
{
    if (n < 1)
    {
        return 0.0;
    }
    else
    {
    int sum = 0;
    int mean;
    for (int i = 0;i<n;i++)
    {
        sum = sum + array[i];
    }
    mean = sum / n;
    return mean;
    }
}