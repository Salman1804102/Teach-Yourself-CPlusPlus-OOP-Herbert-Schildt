#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
main()
{
    cout << setw(5) << setprecision(2) << 1.2345
         << setw(10) << setprecision(4) << sqrt(2) << setw(15)
         << setiosflags(ios::scientific) << sqrt(3) << endl;
}
