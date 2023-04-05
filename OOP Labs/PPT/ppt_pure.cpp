#include<iostream>
using namespace std;

class Enemy{
    public:
        virtual void attack()=0;
};

class Vampire: public Enemy {
    public:
        void attack() { cout<<"\nVampire is Attacking you!";}
};

class Zombie: public Enemy {
    public:
        void attack() { cout<<"\nZombie is Attacking you!";}
};

int main(){
   // Enemy *E = new Enemy; E->attack();
    Vampire *V = new Vampire; V->attack();
    Zombie *Z = new Zombie; Z->attack();
    return 0;
}