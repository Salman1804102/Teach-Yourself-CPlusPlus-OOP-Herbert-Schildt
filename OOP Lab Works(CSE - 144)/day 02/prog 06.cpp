#include<bits/stdc++.h>
using namespace std;
int addition(int a, int b, int c)
{
    return (a + b + c);
}
int addition(int a, int b)
{
    return (a + b);
}
double addition(double a, double b)
{
    return (a + b);
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << addition(a, b) << endl;
    cout << addition(a, b, c) << endl;
    double d, f;
    cin >> d >> f;
    cout << addition(d, f) << endl;
    return 0;
}
