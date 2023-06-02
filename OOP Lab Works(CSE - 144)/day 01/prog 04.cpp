#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int x, y, z;
    cin >> x >> y >> z;
    int Max = (x > y) ? ((x > z) ? x : z) : y;
    cout << Max << endl;
    return 0;
}
