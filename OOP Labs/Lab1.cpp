#include<iostream>

using namespace std;

class person
{
    public:
        string name;
        int number;
};

int main()
{
    person obj;
    cout<<"Enter the name:\t";
    cin>>obj.name;

    cout<<"Enter the number:\t";
    cin>>obj.number;

    cout<<obj.name <<endl << obj.number<< endl;

    return 0;

}