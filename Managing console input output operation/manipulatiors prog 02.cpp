#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    cout.setf(ios::showpoint);
    cout.setf(ios::showpos);
    cout.width(15);
    cout << setprecision(4);
    cout << setiosflags(ios::scientific);
    cout << setw(10) << 123.45678;
}
