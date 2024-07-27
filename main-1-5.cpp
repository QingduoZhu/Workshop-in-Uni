#include <iostream>
extern int count_evens;
int main()
{
    int array[9999];
    std::cout<<("type in the array");
    for (int i = 1;i<n;i++)
    {
        std::cin>>array[i];
    }
    int a = count_evens(array);
    if (a == 0)
    {
        std::cout<<"Wrong input";
    }
    else
    {
        std::cout<<"Number is "<<a;
    }
    return 0;
}