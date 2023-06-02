#include<bits/stdc++.h>
using namespace std;
class shape
{
protected:
    double height, width;
public:
    void readdata()
    {
        cin >> height >> width;
    }
    virtual void area() = 0;
};
class triangle:public shape
{
public:
    void area()
    {
        cout << "Triangle area: " << setprecision(2) << setiosflags(ios::fixed) << 0.5 * height * width << endl;
    }
};
class rectangle:public shape
{
public:
    void area()
    {
        cout << "Rectangle area: " << setprecision(2) << setiosflags(ios::fixed) << height * width << endl;
    }
};
main()
{
    shape *p;
    triangle t;
    rectangle r;
    p = &t;
    p->readdata();
    p->area();
    p = &r;
    p->readdata();
    p->area();
}
