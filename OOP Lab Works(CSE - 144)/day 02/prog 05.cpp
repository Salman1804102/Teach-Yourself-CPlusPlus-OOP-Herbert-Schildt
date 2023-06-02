#include<bits/stdc++.h>
using namespace std;
bool is_Prime(int n)
{
    if(n < 2)
        return false;
    else if(n == 2)
        return true;
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        if(is_Prime(i))
            cout << i << " ";
    }
    cout << endl;
    return 0;
}
