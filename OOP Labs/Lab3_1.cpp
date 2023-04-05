#include<iostream>

using namespace std;

class Cylinder
{
    private:
    double radius;
    double height;
    
    public:

    Cylinder() //DEFAULT
    {
        radius=7;
        height=5;
    }

    Cylinder(int rad, int h) //PARAMETERISED
    {
        radius=rad;
        height=h;
    }

    Cylinder(Cylinder &obj) //COPY
    {
        radius=obj.radius;
        height=obj.height;
    }

    double calcVol()
    {
        return 3.141*radius*radius*height;
    }
};

int main()
{
    Cylinder cyl1(10,10); //Parameterised

    Cylinder cyl2; //Default constructor

    cout<<"Area of Cylinder 1 (Parameterised):\t"<<cyl1.calcVol()<<"\n";

    cout<<"Area of Cylinder 2 (Default):\t"<<cyl2.calcVol()<<"\n";

    Cylinder cyl3= cyl1; //Copy Constructor.

    cout<<"Area of Cylinder 3 (Copy):\t"<<cyl3.calcVol()<<"\n";

    return 0;
}