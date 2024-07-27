#include <iostream>
extern int min_element;
int main()
{
    int n;
    int array[9999];
    std::cout<<"type in the array length";
    std::cin>>n;
    std::cout<<("type in the array");
    for (int i = 1;i<n;i++)
    {
        std::cin>>array[i];
    }
    int a = min_element(array[],n);
    if (a == 0)
    {
        std::cout<<"Wrong input";
    }
    else
    {
        std::cout<<"min is "<<a;
    }
}