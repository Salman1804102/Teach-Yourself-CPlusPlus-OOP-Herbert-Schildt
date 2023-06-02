#include<bits/stdc++.h>
using namespace std;
ostream & currency(ostream & output)
{
    output << "RS";
    return output;
}
ostream &form(ostream &output)
{
    output.setf(ios::showpos);
    output.setf(ios::showpoint);
    output.fill('*');
    output.precision(2);
    output << setiosflags(ios::fixed) << setw(10);
    return output;
}
main()
{
    cout << currency << form << 7864.5;
}
