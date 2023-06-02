#include<bits/stdc++.h>
using namespace std;
main()
{
    int num;
    cout << "Enter an integer value: ";
    cin >> num;
    cout << "The hexadecimal, octal and decimal representation is: ";
    cout.setf(ios::hex, ios::basefield);
    cout << num << ", ";
    cout.setf(ios::oct, ios::basefield);
    cout << num << ", ";
    cout.setf(ios::dec, ios:: basefield);
    cout << "and " << num << " respectively";
}
