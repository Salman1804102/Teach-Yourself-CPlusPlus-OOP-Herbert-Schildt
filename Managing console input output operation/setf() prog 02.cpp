#include<iostream>
using namespace std;
main()
{
    cout.fill('*');
    cout.precision(3);
    cout.setf(ios::internal, ios::adjustfield);
    cout.setf(ios::scientific, ios::floatfield);
    cout.width(15);
    cout << -12.34567 << endl;
}

