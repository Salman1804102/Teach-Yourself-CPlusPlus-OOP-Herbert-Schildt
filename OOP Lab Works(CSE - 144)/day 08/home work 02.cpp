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
        cout<< x <<endl;
    }
    Prefix_Postfix operator++()
    {
        cout<<"Prefix is: "<<endl;
        Prefix_Postfix ob;
        ob.x= ++x;
        return ob;
    }
    Prefix_Postfix operator++(int r)
    {
        cout<<"Postfix is: "<<endl;
        Prefix_Postfix ob;
        ob.x = x++;
        return ob;
    }
};
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
