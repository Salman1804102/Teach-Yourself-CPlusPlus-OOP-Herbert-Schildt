#include<bits/stdc++.h>
using namespace std;
main()
{
    char *string1 = "C++";
    char *string2 = "Programming";
    int m = strlen(string1);
    int n =  strlen(string2);
    for(int i = 1; i <= n; i++)
    {
        cout.write(string2, i);
        cout << endl;
    }
    for(int i = n-1; i >= 1; i--)
    {
        cout.write(string2, i);
        cout << endl;
    }
    cout.write(string1, m).write(string2, n);
    cout << endl;
    cout.write(string1, 10);
}
