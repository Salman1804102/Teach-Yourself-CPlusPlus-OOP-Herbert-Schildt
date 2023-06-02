#include<bits/stdc++.h>
using namespace std;
class myclass
{
    int n;
public:
    void readdata()
    {
        cin >> n;
    }
    friend void check(myclass ob);
};
void check(myclass ob)
{
    ob.readdata();
    if(ob.n & 1)
        cout << "The number is odd" << endl;
    else
        cout << "The number is even" << endl;
}
int main()
{
    myclass ob;
    check(ob);
    return 0;
}
