#include<iostream>
using namespace std;
main()
{
    cout.fill('*');
    cout.setf(ios::left, ios::adjustfield);
    cout.width(15);
    cout << "TABLE:1" << endl;
}
