#include <iostream>
extern int sum_two_arrays;
int main()
{
    int n;
    int array[9999];
    int secondarray[9999];
    int n;
    std::cout<<"type in the array length";
    std::cin>>n;
    std::cout<<("type in the array");
    for (int i = 1;i<n;i++)
    {
        std::cin>>array[i];
    }
    for (int i = 1;i<n;i++)
    {
        std::cin>>secondarray[i];
    }
    n = sum_two_arrays(array,secondarray,n);
    if (n == 0)
    {
        std::cout<<"Wrong input";
    }
return 0;
}