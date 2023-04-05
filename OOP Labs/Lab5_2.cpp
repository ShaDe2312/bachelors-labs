#include <iostream>
using namespace std;

class Add
{
    int number1 = 0;
public:
    int sum(int number2)   //Function Overloading
    {
        return number1 + number2;
    }
    int sum(int number1, int number2) //Function Overloading
    {
        return number1 + number2;
    }
};
int main()
{
    Add obj1;
    cout<<"Output (1 parameter): "<<obj1.sum(100)<<endl;
    cout<<"Output (2 parameters): "<<obj1.sum(12, 24)<<endl;
    return 0;
}
