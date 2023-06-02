#include<bits/stdc++.h>
using namespace std;
class mybase
{
    string str;
public:
    mybase(string s)
    {
        str = s;
    }
    string get()
    {
        return str;
    }
};
class myderived:public mybase
{
    int len;
public:
    myderived(string s):mybase(s)
    {
        len = s.size();
    }
    int getlen()
    {
        return len;
    }
    void show()
    {
        cout << get() << endl;
    }
};
int main()
{
    myderived ob("Salman");
    ob.show();
    cout << ob.getlen() << endl;
    return 0;
}
