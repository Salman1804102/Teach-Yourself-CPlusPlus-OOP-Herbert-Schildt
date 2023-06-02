#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int alpha = 0, digit = 0, special = 0;
    getline(cin , s);
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            alpha++;
        else if(s[i] >= 'a' && s[i] <= 'z')
            alpha++;
        else if(s[i] >= '0' && s[i] <= '9')
            digit++;
        else
            special++;
    }
    cout << "Number of Alphabets = " << alpha << endl;
    cout << "Number of digits = " << digit << endl;
    cout << "Number of special character = " << special << endl;
    return 0;
}
