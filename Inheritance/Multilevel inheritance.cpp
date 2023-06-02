#include<bits/stdc++.h>
using namespace std;
class b1
{
    int a;
public:
    b1(int x)
    {
        a = x;
    }
    int geta()
    {
        return a;
    }
};
class d1:public b1
{
    int b;
public:
    d1(int x, int y): b1(y)
    {
        b = x;
    }
    int getb()
    {
        return b;
    }
};
class d2:public d1
{
    int c;
public:
    d2(int x, int y, int z):d1(y, z)
    {
        c = x;
    }
    void show()
    {
        cout << geta() << " " << getb() << " ";
        cout << c << endl;
    }
};
int main()
{
    d2 ob(1, 2, 3);
    ob.show();
    cout << ob.geta() << " " << ob.getb() << endl;
    return 0;
}

