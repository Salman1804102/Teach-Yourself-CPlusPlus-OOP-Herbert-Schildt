#include<bits/stdc++.h>
using namespace std;
class student
{
    int roll_num;
    static int cnt;
public:
    static int getcnt()
    {
        return cnt;
    }
    void getnum()
    {
        cin >> roll_num;
        cnt++;
    }
    void putnumber()
    {
        cout << "Roll Number = " << roll_num << endl;
    }
};
int student::cnt = 0;
int main()
{
    student s1, s2;
    s1.getnum();
    cout << "Object Number = " << student::getcnt() << endl;
    s1.putnumber();
    s2.getnum();
    cout << "Object Number = " << student::getcnt() << endl;
     s2.putnumber();
    return 0;
}
