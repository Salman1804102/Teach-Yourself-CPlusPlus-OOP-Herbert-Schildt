#include<bits/stdc++.h>
using namespace std;
class dist
{
    int feet;
    int inch;
public:
    dist()
    {
        feet = 0;
        inch = 0;
    }
    dist(int a, int b)
    {
        feet = a;
        inch = b;
    }
    friend ostream& operator << (ostream &out, dist &ob);
    friend istream& operator >> (istream &in, dist &ob);
};
ostream& operator << (ostream &out, dist &ob)
{
    out << "Feet: " << ob.feet << " Inch: " << ob.inch << endl;
    return out;
}
istream& operator >>(istream &in, dist &ob)
{
    in >> ob.feet >> ob.inch;
    return in;
}
main()
{
    dist d1(11, 10), d2(5, 11), d3;
    cout << "Enter the values of object: " << endl;
    cin >>d3;
    cout << "First distance: " << d1;
    cout << "Second distance: " << d2;
    cout << "Third distance:  " << d3;
}
