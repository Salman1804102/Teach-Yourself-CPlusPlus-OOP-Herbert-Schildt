#include<iostream>
using namespace std;
main()
{
    float pi = 22.0 / 7.0;
    cout << "Value of pi:" << endl;
    for(int i = 1; i <= 10; i++)
    {
        cout.width(i+1);
        cout.precision(i);
        cout << pi << endl;
    }
}
