#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    char ch;
    cin >> ch;
    if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
        cout << "Alphabet" << endl;
    else if(ch >= '0' && ch <= '9')
        cout << "Digit" << endl;
    else
        cout << "Special character" << endl;
    return 0;
}
