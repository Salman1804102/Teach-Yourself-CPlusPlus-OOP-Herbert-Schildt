#include<bits/stdc++.h>
using namespace std;
class num
{
public:
    int n;
    void setn()
    {
        cin >> n;
    }
    virtual void shownum() = 0;
};
class outhex:public num
{
public:
    virtual void shownum()
    {
        vector<char>hexnum;
        while(n)
        {
            int r = n % 16;
            n /= 16;
            if(r == 10)
                hexnum.push_back('A');
            else if(r == 11)
                hexnum.push_back('B');
            else if(r == 12)
                hexnum.push_back('C');
            else if(r == 13)
                hexnum.push_back('D');
            else if(r == 14)
                hexnum.push_back('E');
            else if(r == 15)
                hexnum.push_back('F');
            else
                hexnum.push_back(r+'0');
        }
        for(int i = hexnum.size() - 1; i >= 0; i--)
            cout << hexnum[i];
        cout << endl;
    }
};
class outoct:public num
{
public:
    void shownum()
    {
        vector<int>octnum;
        while(n)
        {
            int r = n % 8;
            n /= 8;
            octnum.push_back(r);
        }
        for(int i = octnum.size() - 1; i >= 0; i--)
            cout << octnum[i];
        cout << endl;
    }
};
main()
{
    num *p;
    outhex h;
    outoct o;
    p = &h;
    p ->setn();
    p->shownum();
    p = &o;
    p->setn();
    p->shownum();
}
