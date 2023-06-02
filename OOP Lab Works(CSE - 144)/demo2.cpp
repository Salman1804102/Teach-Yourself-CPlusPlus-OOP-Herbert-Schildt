#include<bits/stdc++.h>
using namespace std;
class myclass
{
    int x, y;
public:
    myclass()
    {
        x = 0;
        y = 0;
    }
    myclass(int p, int q)
    {
        x = p;
        y = q;
    }
    myclass operator++()
    {
        x++;
        y++;
        return *this;
    }
    myclass operator++(int notused)
    {
        x++;
        y++;
        return *this;
    }
    void showinfo()
    {
        cout << x << " " << y << endl;
    }
    friend myclass operator++(myclass &ob);
    friend myclass operator++(myclass &ob, int notused);
};
myclass operator++(myclass &ob)
{
    ob.x++;
    ob.y++;
    return ob;
}
myclass operator++(myclass &ob, int notused)
{
    ob.x++;
    ob.y++;
    return ob;
}
main()
{
    myclass ob1(10, 5), ob2(7, 13), ob3;
    ++ob1;
    ob1.showinfo();
    ob2++;
    ob2.showinfo();
    ob3.showinfo();
}
