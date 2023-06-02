#include<bits/stdc++.h>
using namespace std;
class myclass
{
    int a, b;
public:
    myclass(int x, int y);
    void show();
};
myclass::myclass(int x, int y)
{
    cout << "In constructor\n";
    a = x;
    b = y;
}
void myclass::show()
{
    cout << a  << endl;
    cout << b << endl;
}
int main()
{
  myclass ob(4, 7);
//  myclass ob = myclass(4);
  ob.show();
  return 0;
}

