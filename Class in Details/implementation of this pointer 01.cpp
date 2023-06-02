#include<bits/stdc++.h>
using namespace std;
class A
{
    int x;
public:
    void set_x(int x)
    {
        x = x;
        this->x = x;
    }
    void f1()
    {
        int x = 0;
        cout << "Local x = " << x << endl;
        cout << "Prints value of member x = "<< this->x << endl;
    }
};
int main()
{
    A ob;
    ob.set_x(5);
    ob.f1();
    return 0;
}
