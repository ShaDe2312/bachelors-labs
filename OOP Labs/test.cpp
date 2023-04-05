#include<iostream>

int main()
{
    int a=10;
    int b,c;
    b=a++;
    c=a;
    std::cout<<a<<b<<c;
    return 0;
}