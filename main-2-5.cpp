#include <iostream>
extern bool is_dessending;
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
    bool a = is_dessending(array[],n);
    if (a == false)
    {
        std::cout<<"Wrong input";
    }
    else
    {
        std::cout<<"The array is desending "<<a;
    }
}