#include<iostream>
using namespace std;

//Let's say we have 2 classes.
class Animal 
{
    public:
        void eat() 
        {
            cout<<"\nAn animal eats some food";
        }
};

//Since Cat is an animal, cat inherits from Animal
class Cat: public Animal
{
    public:
        void eat() //Cat is a specific type of animal, and it eats a rat.
        {
            cout<<"\nA Cat eats a rat";
        }
};

int main()
{
    Animal *Aptr;
    Cat *Cptr;

    Aptr->eat();
    Cptr->eat();

    return 0;
}