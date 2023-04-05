#include<iostream>

using namespace std;

class Shape
{
    public:

    double volume(double r)
    {
        return 1.33*3.141*r*r*r;
    }

    double volume(double r, double h)
    {
        return 3.141*r*r*h;
    }
};

int main()
{
    Shape Sphere,Cylinder;

    cout<<"Volume of Sphere is:\t"<<Sphere.volume(7);
    cout<<"Volume of cylinder is:\t"<<Cylinder.volume(7,10);

    return 0;
}