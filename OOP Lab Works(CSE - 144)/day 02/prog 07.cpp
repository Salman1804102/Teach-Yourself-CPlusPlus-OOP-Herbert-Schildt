#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    for(int i = 0; i < s.size(); i++)
    {
        char ch = tolower(s[i]);
        cout << ch;
    }
    cout << endl;
    for(int i = 0; i < s.size(); i++)
    {
        char ch = toupper(s[i]);
        cout << ch;
    }
    return 0;
}
