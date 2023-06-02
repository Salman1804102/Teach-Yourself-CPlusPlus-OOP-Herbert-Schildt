#include<bits/stdc++.h>
using namespace std;
class myclass
{
    int a;
public:
    myclass();
    ~myclass();
    void show();
};
myclass::myclass()
{
    cout << "In constructor\n";
    a = 10;
}
myclass::~myclass()
{
    cout << "Destructing...\n";
}
void myclass::show()
{
    cout << a << "\n";
}
int main(void)
{
    myclass ob;
    ob.show();
    return 0;
}
