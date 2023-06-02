#include<bits/stdc++.h>
using namespace std;
void f1(int a);
void f1(int a, int b);
int main(void)
{
    f1(10);
    cout << endl;
    f1(420, 69);
    return 0;
}
void f1(int a)
{
    cout << "Call refers to f1(int a)" << endl;
    cout << "a = " << a << endl;
}
void f1(int a, int b)
{
    cout << "Call refers to f1(int a, int b)" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
