#include<bits/stdc++.h>
using namespace std;
class myclass
{
    int i, j;
public:
    myclass(int a, int b);
    void show();
};
void myclass::show()
{
    cout << i << " " << j << endl;
}
myclass::myclass(int a, int b)
{
    i = a;
    j = b;
}
int main()
{
    int x, y;
    cin >> x >> y;
    myclass ob(x, y);
    ob.show();
    return 0;
}
