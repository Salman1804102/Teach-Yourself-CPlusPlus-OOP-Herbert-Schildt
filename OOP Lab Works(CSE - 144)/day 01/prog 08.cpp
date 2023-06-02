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
int main(void)
{
    int m, n;
    cin >> m >> n;
    int sum = 0;
    for(int i = m; i <= n; i++)
    {
        if(is_Prime(i))
            sum += i;
    }
    cout << sum << endl;
    return 0;
}
