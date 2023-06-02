#include<bits/stdc++.h>
using namespace std;
void sorting(int ara[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(ara[i] > ara[j])
            {
                int t = ara[i];
                ara[i] = ara[j];
                ara[j] = t;
            }
        }
    }
}
void revsorting(int ara[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(ara[i] < ara[j])
            {
                int t = ara[i];
                ara[i] = ara[j];
                ara[j] = t;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int ara[n];
    for(int i = 0; i < n; i++)
        cin >> ara[i];
    sorting(ara, n);
    for(int i = 0; i < n; i++)
        cout << ara[i] << " ";
    cout << endl;
    revsorting(ara, n);
    for(int i = 0; i < n; i++)
        cout << ara[i] << " ";
    cout << endl;
    return 0;
}
