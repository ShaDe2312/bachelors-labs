#include<iostream>

using namespace std; 
  
class Complex { 
private: 
    double real, imag; 
public: 
    Complex(double r = 0, double i =0)
    {
        real = r;
        imag = i;
    } 
      

    Complex operator + (Complex const &obj) { 
         Complex res; 
         res.real = real + obj.real; 
         res.imag = imag + obj.imag; 
         return res; 
    } 

    Complex operator - (Complex const &obj) { 
         Complex res; 
         res.real = real - obj.real; 
         res.imag = imag - obj.imag; 
         return res; 
    }

    Complex operator * (Complex const &obj) { 
         Complex res; 
         res.real = (real * obj.real) - (imag * obj.imag); 
         res.imag = (imag *  obj.real) + (real * obj.imag); 
         return res; 
    }

    Complex operator / (Complex const &obj){
        Complex res;
        res.real= ((real * obj.real) + (imag * obj.imag))/ ((obj.imag*obj.imag) + (obj.real * obj.real));
        res.imag= ((imag * obj.real) - (real * obj.imag)) / ((obj.imag*obj.imag) + (obj.real * obj.real));
        return res;
    } 
    void print()
    { 
        if( imag>=0)
        cout << real << " + " << imag <<"i"<< endl; 

        else
        cout << real << " - " << abs(imag) <<"i"<< endl;         
    } 
}; 
  
int main() 
{ 
    Complex c1(10, 5), c2(2, 4); 
    Complex c3 = c1 + c2; 
    Complex c4 = c1 - c2;  
    Complex c5 = c1 * c2;  
    Complex c6 = c1 / c2;   
    
    cout<<endl<<endl;
    c3.print(); 
    c4.print(); 
    c5.print(); 
    c6.print(); 
} 