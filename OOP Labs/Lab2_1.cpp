#include<iostream>

using namespace std;

class Parent
{
    public:
    Parent()
    {
        cout<<"Inside base class constructor (parent)\n\n";
    }

    ~Parent()
    {
        cout<<"Base class destructor called\n\n";

    }
};

class Child : public Parent
{

public:
    Child()
    {
        cout<<"Inside sub class constructor(child)\n\n";
    }


    ~Child()
    {
        cout<<"Child class destructor called\n\n";
    }
};

int main()
{
    Child obj;

    return 0;
}
