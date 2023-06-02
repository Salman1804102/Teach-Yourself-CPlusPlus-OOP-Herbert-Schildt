#include<bits/stdc++.h>
using namespace std;
class b1
{
public:
    b1()
    {
        cout << "constructing b1" << endl;
    }
    ~b1()
    {
        cout << "destructing b1" << endl;
    }
};
class b2
{
    int b;
public:
    b2()
    {
        cout << "constructing b2" << endl;
    }
    ~b2()
    {
        cout << "destructing b2" << endl;
    }
};

class d: public b1, public b2
{
public:
    d()
    {
        cout << "constructing d" << endl;
    }
    ~d()
    {
        cout << "destructing d" << endl;
    }
};
int main()
{
    d ob;
    return 0;
}
