#include<bits/stdc++.h>
using namespace std;
class integer
{
    int m, n;
public:
    integer()
    {
        m = 0;
        n = 0;
    }
    integer(int a, int b)
    {
        m = a;
        n = b;
    }
    integer(integer &i)
    {
        m = i.m;
        n = i.n;
    }
    void show()
    {
        cout << m << " " << n << endl;
    }
};
int main()
{
    integer i1, i2(20, 40), i3(i2);
    i1.show();
    i2.show();
    i3.show();
    return 0;
}
