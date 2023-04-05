#include <iostream>

using namespace std;

class DemoDC
{

private:
    int num1, num2;

public:
    DemoDC()
    { //Default Constructor called here

        num1 = 101;

        num2 = 2017;
    }

    void display()
    {

        cout << "num1 = " << num1 << endl;

        cout << "num2 = " << num2 << endl;
    }
};

int main()
{
    DemoDC obj;

    obj.display();  

    return 0;
}