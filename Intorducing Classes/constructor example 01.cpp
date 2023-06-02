#include<bits/stdc++.h>
using namespace std;
class myclass
{
    int a;
public:
    myclass();
    void show();
};
myclass::myclass()
{
    cout << "In constructor\n";
    a = 10;
}
void myclass::show()
{
    cout << a;
}
int main(void)
{
    myclass ob;
    ob.show();
    return 0;
}
