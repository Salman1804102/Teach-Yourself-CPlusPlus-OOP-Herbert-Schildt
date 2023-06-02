#include<bits/stdc++.h>
using namespace std;
class Prefix_Postfix
{
    int x;
public:
    Prefix_Postfix()
    {
        x = 0;
    }
    void showdata()
    {
        cout<<x<<endl;
    }
    friend Prefix_Postfix operator++(Prefix_Postfix &ob);
    friend Prefix_Postfix operator++(Prefix_Postfix &ob, int value);
};
Prefix_Postfix operator++(Prefix_Postfix &ob)
{
    cout<<"Prefix is: "<<endl;
    Prefix_Postfix temp;
    temp.x= ++ob.x;
    return temp;
}
Prefix_Postfix operator++(Prefix_Postfix &ob, int value)
{
    cout<<"Postfix is: "<<endl;
    Prefix_Postfix temp;
    temp.x = ob.x++;
    return temp;
}
int main()
{
    Prefix_Postfix ob1,ob2;
    ob2.showdata();
    ob1.showdata();
    ob2 = ++ob1;
    ob2.showdata();
    ob1.showdata();
    ob2 = ob1++;
    ob2.showdata();
    ob1.showdata();
    return 0;
}
