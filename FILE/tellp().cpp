#include<bits/stdc++.h>
using namespace std;
main()
{
    ofstream fileout;
    fileout.open("hello", ios::app);
    int p = fileout.tellp();
    cout << p << endl;
}
