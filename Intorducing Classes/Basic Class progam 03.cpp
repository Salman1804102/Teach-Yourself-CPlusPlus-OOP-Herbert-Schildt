#include<bits/stdc++.h>
using namespace std;
class myclass
{
    public:
    int a;
    void set_a(int num);
    int get_a();
};
void myclass::set_a(int num)
{
    a = num;
}
int myclass::get_a()
{
    return a;
}
int main(void)
{
    myclass ob1, ob2;
    ob1.a = 10;
    ob2.a = 98;
    //ob1.set_a(420);
    //ob2.set_a(69);
    cout << ob1.a << endl;
    cout << ob2.a << endl;
    return 0;
}
