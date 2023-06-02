#include<bits/stdc++.h>
using namespace std;
class area_cl
{
public:
    double height;
    double width;
};
class rectangle:public area_cl
{
public:
    rectangle(double h, double w)
    {
        height = h;
        width = w;
    }
    void area()
    {
        cout << height * width << endl;
    }
};
class isosceles:public area_cl
{
public:
    isosceles(double h, double w)
    {
        height = h;
        width = w;
    }
    void area()
    {
        cout << 0.5 * height * width << endl;
    }
};
int main()
{
    double h, w;
    cin >> h >> w;
    rectangle r(h, w);
    isosceles s(h, w);
    r.area();
    s.area();
    return 0;
}
