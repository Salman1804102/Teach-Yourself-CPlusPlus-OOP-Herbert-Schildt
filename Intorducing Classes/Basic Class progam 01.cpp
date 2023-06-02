#include<bits/stdc++.h>
using namespace std;
class myclass
{
    int a;
public:
    void set_a(int num);
    int get_a();
};
void myclass::set_a(int num)
{
    a = num;//here we are accessing private data member using public member function
}
int myclass::get_a()
{
    return a;
}
int main(void)
{
    myclass ob1, ob2;
    ob1.set_a(10);
    ob2.set_a(99);
    cout << ob1.get_a() << endl;
    cout << ob2.get_a() << endl;
    return 0;
}
