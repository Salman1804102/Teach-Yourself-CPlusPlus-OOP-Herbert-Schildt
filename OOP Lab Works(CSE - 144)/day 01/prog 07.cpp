#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        if(!(i & 1))
            cout << i << " ";
    }
    return 0;
}
