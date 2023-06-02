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
    friend class frnd;
};
class frnd
{
public:
    void display(myclass ob)
    {
        ob.readdata();
        if(ob.n % 2 == 0)
            cout << "The number is even" << endl;
        else
            cout << "The number is odd" << endl;
    }
};
int main()
{
    myclass ob1;
    frnd ob2;
    ob2.display(ob1);
    return 0;
}

