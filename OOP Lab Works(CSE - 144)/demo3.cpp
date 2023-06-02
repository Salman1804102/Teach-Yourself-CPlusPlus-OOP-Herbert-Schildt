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
    cout << "info for ob2 = ";
    ob2++;
    ob2.showinfo();
    cout << "info for ob3 = ";
    ob3.showinfo();
}
