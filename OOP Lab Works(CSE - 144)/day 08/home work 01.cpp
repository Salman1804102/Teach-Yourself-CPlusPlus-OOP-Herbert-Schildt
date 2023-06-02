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
    }
    Complex(double i, double j)
    {
        real = i;
        img = j;
    }
    Complex operator- (Complex ob)
    {
        Complex c;
        c.real = real - ob.real;
        c.img = img - ob.img;
        return c;
    }
    void display()
    {
        cout<<real<<img<<"i"<<endl;
    }
};
int main()
{
    int x, y, z, w;
    cin>>x>>y>>z>>w;
    Complex c1(x, y), c2(z, w), c3;
    c3 = c1 - c2;
    c3.display();
    return 0;
}
