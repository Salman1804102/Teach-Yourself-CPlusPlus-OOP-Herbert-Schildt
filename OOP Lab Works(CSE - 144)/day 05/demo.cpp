#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    int n, m;
    ll p, q;
    cin >> t;
    while(t--)
    {
       ll even1 = 0, even2 = 0, odd1 = 0, odd2 = 0;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> p;
            if(p % 2)
                odd1++;
            else
                even1++;
        }

        cin >> m;
        for(int i = 0; i < m; i++)
        {
            cin >> q;
            if(q % 2)
                odd2++;
            else
                even2++;
        }
        cout << even1 * even2 + odd1 * odd2 << endl;
    }
    return 0;
}
