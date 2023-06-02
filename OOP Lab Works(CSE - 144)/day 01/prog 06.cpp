#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a == b && a == c)
        cout << "Equilateral" << endl;
    else if(a == b || b == c)
        cout << "Scalene" << endl;
    else
        cout << "Isosceles" << endl;
    return 0;
}
