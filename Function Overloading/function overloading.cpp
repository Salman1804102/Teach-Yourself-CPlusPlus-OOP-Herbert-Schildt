#include<bits/stdc++.h>
using namespace std;
int absl(int n);
long absl(long n);
double absl(double n);
int main()
{
    cout << "Absolute value of -10: " << absl(-10) << endl << endl;
    cout << "Absolute value of -10L: " << absl(-10L) << endl << endl;
    cout << "Absolute value of -10.01: " << absl(-10.01) << endl << endl;
    return 0;
}
int absl(int n)
{
    cout << "In integer abs()\n";
    return n < 0 ? -n : n;
}
long absl(long n)
{
    cout << "In long abs()\n";
    return n < 0 ? - n: n;
}
double absl(double n)
{
    cout << "In double abs()\n";
    return n < 0 ? - n : n;
}
