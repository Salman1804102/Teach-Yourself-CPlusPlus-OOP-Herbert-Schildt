#include<bits/stdc++.h>
using namespace std;
class myclass{
    int a, b;
public:
    void SET(int i, int j)
    {
        a = i;
        b = j;
    }
    void show()
    {
        cout << a << ' ' << b << "\n";
    }
};
int main()
{
    myclass o1, o2;
    o1.SET(10, 5);
    o2 = o1;
    o1.show();
    o2.show();
    return 0;
}
