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
    string s;
    getline(cin, s);
    int freq[256] = {0};
    for(int i = 0; i < s.size(); i++)
    {
        freq[s[i]]++;
    }
    int res = finding_max(freq, 256);
    char ch = res;
    cout << "Highest frequency character is "<< ch << " = " << freq[res] << endl;
    return 0;
}

