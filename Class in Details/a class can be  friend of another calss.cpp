#include<bits/stdc++.h>
using namespace std;
class demo
{
private:
    int x, y;
public:
    void setdemo(int a, int b) {x = a; y = b;}
    friend class frnd;
};
class frnd
{
public:
    void display(demo d1)
    {
        cout << "x is = " << d1.x;
        cout << endl;
        cout << "y = " << d1.y;
    }
};
int main()
{
    demo d2;
    d2.setdemo(10, 40);
    frnd f1;
    f1.display(d2);
    return 0;
}
