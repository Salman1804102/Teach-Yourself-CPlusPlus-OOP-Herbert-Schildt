#include<bits/stdc++.h>
using namespace std;
class base
{
    int i;
public:
    base(int n)
    {
        cout << "constructing base class" << endl;
        i = n;
    }
    ~base()
    {
        cout << "Destructing base class" << endl;
    }
    void showi()
    {
        cout << i << endl;
    }
};
class derived:public base
{
    int j;
public:
    derived(int n) : base(n)
    {
        cout << "constructing derived class" << endl;
        j = 0; // n not used here, simply passed to base class
    }
    ~derived()
    {
        cout << "Destructing derived class" << endl;
    }
    void showj()
    {
        cout << j << endl;
    }
};
int main()
{
    derived o(10);
    o.showi();
    o.showj();
    return 0;
}


