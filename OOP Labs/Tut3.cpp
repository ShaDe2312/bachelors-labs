#include<iostream>

using namespace std;

int main()
{
    cout<<"Please enter two numbers:\t";
    int a,b;
    cin>>a>>b;

    cout<<"\n\nWhat do you want to do with these numbers?:\nPress s for finding smallest, press b for finding biggest:\t";
    char choice;
    cin>>choice;


    if(choice=='s' || choice=='S')
    {
        if(a<b)
            cout<<"\n"<<a<<" is the smaller one";

        else if(b<a)
            cout<<"\n"<<b<<" is the smaller one";        

        else
            cout<<"\nBoth are same";
    }

    else if(choice=='b' || choice=='b')
    {
        if(a<b)
            cout<<"\n"<<b<<" is the greater one";

        else if(b<a)
            cout<<"\n"<<a<<" is the greater one";        

        else
            cout<<"\nBoth are same";
    }

    else
        cout<<"\n\nWrong choice. Please try again.";



    return 0;
}