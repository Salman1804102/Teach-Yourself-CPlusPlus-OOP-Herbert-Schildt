#include<bits/stdc++.h>
using namespace std;
class Complex
{
    float x, y;
public:
    Complex() {}
    Complex(float a)
    {
        x = y = a;
    }
    Complex(float real, float img)
    {
        x = real;
        y = img;
    }
    friend Complex sum(Complex, Complex);
    friend void show(Complex);
};
Complex sum(Complex c1, Complex c2)
{
    Complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return c3;
}
void show(Complex c)
{
    cout << c.x << " +i" << c.y << endl;
}
int main()
{
    Complex A(2.7, 3.5);
    Complex B(1.5);
    Complex C;
    C = sum(A, B);
    cout << "A = " ;
    show(A)  ;
    cout << "B = "  ;
    show(B) ;
    cout << "C = "  ;
    show(C)  ;
    return 0;
}
