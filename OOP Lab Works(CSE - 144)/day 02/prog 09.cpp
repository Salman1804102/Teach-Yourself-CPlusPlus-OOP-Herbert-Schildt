#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int freq[256] = {0};
    for(int i = 0; i < s.size(); i++)
    {
        freq[s[i]]++;
    }
    for(int i = 0; i < 256; i++)
    {
        char ch = i;
        if(freq[i])
            cout << "Number of Occurrence of character " << ch << " = " << freq[i] << endl;
    }
    return 0;
}
