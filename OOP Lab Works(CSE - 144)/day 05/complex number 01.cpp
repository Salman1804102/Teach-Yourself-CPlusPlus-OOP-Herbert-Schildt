#include<bits/stdc++.h>
using namespace std;
class myclass
{
    int x, y;
public:
    void readdata(){
        cin >> x >> y;
    }
    friend void complex_sum(myclass ob1, myclass ob2);
};
void complex_sum(myclass ob1, myclass ob2)
{
    myclass ob3;
    ob1.readdata();
    ob2.readdata();
    ob3.x = ob1.x + ob2.x;
    ob3.y = ob1.y + ob2.y;
    cout << "Sum :";
    cout << ob3.x << " + " << ob3.y << "i" << endl;
}
int main()
{
    myclass ob1, ob2;
    complex_sum(ob1, ob2);
    return 0;
}
