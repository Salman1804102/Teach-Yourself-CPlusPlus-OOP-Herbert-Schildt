#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
    if(n <= 1)
        return n;
    else
        return fib(n -1) + fib(n - 2);
}
int main(void)
{
    int n;
     cin >> n;
     for(int i = 1; i <= n; i++)
        cout << fib(i) << " ";
     cout << endl;
     return 0;
}