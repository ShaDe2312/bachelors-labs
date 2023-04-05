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

void Eating(Animal * a)
{
    a->eat();
}

int main()
{
    Animal A;
    Cat C;

    Animal * Aptr = &A;
    Cat *Cptr= &C;
    
    Eating(Aptr); //OUTPUT: An animal eats some food
    Eating(Cptr); //OUTPUT: An animal eats some food

    return 0;
}