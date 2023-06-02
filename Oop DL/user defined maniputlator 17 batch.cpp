#include<bits/stdc++.h>
using namespace std;
ostream & setup(ostream &out)
{
    out.setf(ios::fixed, ios::floatfield);
    out.width(10);
    out.precision(4);
    out.fill('+');
    return out;
}
main()
{
    double num;
    cin >> num;
    cout << setup << num;
}
