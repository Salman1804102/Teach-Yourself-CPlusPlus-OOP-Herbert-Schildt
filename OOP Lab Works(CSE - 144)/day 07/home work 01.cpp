#include<bits/stdc++.h>
using namespace std;
class Complex
{
    double real, img;
public:
    Complex()
    {
        real = 0;
        img = 0;
    };
    Complex(double i)
    {
        real= i;
        img= i;
    }
    Complex(double i, double j)
    {
        real=i;
        img=j;
    }
    Complex(Complex &ob)
    {
        real=ob.real;
        img=ob.img;
    }
    friend void sum(Complex, Complex);
};
void sum(Complex c1, Complex c2)
{
    Complex c3;
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;
    cout<<"Sum of two complex number is: "<<c3.real<<" + "<<c3.img<<"i";
}
int main()
{
    Complex c1;
    Complex c2(7);
    Complex c3(13, 9);
    sum(c2, c3);
    return 0;
}
