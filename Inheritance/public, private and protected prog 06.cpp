#include<bits/stdc++.h>
using namespace std;
class base
{
protected:
    int a, b;
public:
    void setab(int n, int m)
    {
        a = n;
        b = m;
    }
};
class derived: protected base
{
    int c;
public:
    void setc(int n)
    {
        c = n;
    }
    void showabc()
    {
        cout << a << " "  << b << " "  << c  << endl;
    }
};
int main()
{
    derived ob;
    ob.setab(1, 2); // setab() isn't accessible here.
    ob.setc(3);
    ob.showabc();
    return 0;
}

