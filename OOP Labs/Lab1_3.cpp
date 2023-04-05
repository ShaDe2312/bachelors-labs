#include<iostream>

using namespace std;

class Sum
{
    private: int x,y,z;

    public: 
    void addition()
    {
        cout<<"Enter two numbers  ";
        cin>>x>>y;

        z=x+y;

        cout<<"\nSum of two numbers is: "<<z;

    }
};

int main()
{
    Sum add;

    add.addition();
    return 0;

}