#include<bits/stdc++.h>
using namespace std;
class Distance
{
    int f,i;
public:
    void input()
    {
        int x,y;
        cout<<"Enter Feet and Inch : ";
        cin>>x>>y;
        if(y>=12)
        {
            x=x+y/12;
            y%=12;
        }
        f=x;
        i=y;
    }
    void output()
    {
        cout<<"Feet : "<<f<<"  "<<"Inch : "<<i<<endl;
    }
    bool operator < (Distance n)
    {
        if(f<n.f)
            return true;
        if(f==n.f && i<n.i)
            return true;
        return false;
    }
    friend Distance operator + (Distance op1,Distance op2);
};

Distance operator+(Distance op1, Distance op2)
{
    Distance temp;
    temp.f = op1.f + op2.f;
    temp.i = op1.i + op2.i;
    if(temp.i>=12)
    {
        temp.f=temp.f+temp.i/12;
        temp.i%=12;
    }
    return temp;
}

int main()
{
    Distance o1,o2,X;
    o1.input();
    o2.input();
    o1.output();
    o2.output();
    X=o1+o2;
    X.output();
    if(o1<o2)
        cout<<"Second substance  has Large Value."<<endl;
    else
        cout<<"First substance  has Large Value."<<endl;
    return 0;
}

