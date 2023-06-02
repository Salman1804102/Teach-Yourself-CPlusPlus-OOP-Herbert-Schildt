#include<bits/stdc++.h>
using namespace std;
int finding_max(int ara[], int n)
{
    int Max = 0;
    for(int i = 0; i< n; i++)
    {
        if(ara[Max] < ara[i])
            Max = i;
    }
    return Max;
}
int finding_min(int ara[], int n)
{
    int Min = 0;
    for(int i = 0; i< n; i++)
    {
        if(ara[Min] > ara[i])
            Min = i;
    }
    return Min;
}
int main()
{
    int n;
    cin >> n;
    int ara[n];
    for(int i = 0; i < n; i++)
        cin >> ara[i];
    int ind1 = finding_max(ara, n);
    cout << "Maximum Element found at index " << ind1 << " and value = " << ara[ind1] << endl;
    int ind2 = finding_min(ara, n);
    cout << "Minimum Element found at index " << ind2 << " and value = " << ara[ind2] << endl;
    return 0;
}
