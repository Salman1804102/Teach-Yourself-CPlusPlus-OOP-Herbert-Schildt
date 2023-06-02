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
int main()
{
    int n;
    cin >> n;
    int ara[n];
    for(int i = 0; i < n; i++)
        cin >> ara[i];
    int ind1 = finding_max(ara, n);
    int ind2 = 0;
    for(int i =  0; i  < n; i++)
    {
        if(i == ind1)
            continue;
        if(ara[ind2] < ara[i])
            ind2 = i;
    }
    cout << "Second Maximum = " << ara[ind2] << endl;
    return 0;
}
