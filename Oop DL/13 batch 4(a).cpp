#include<bits/stdc++.h>
using namespace std;
class person
{
protected:
    string name;
    int code;
    int experience_year;
    int pay;
};
class account:virtual public person
{
public:
    void readdata1()
    {
        cout << "Enter account pay: ";
        cin >> pay;
    }
    void showdata1()
    {
        cout << "Pay: " << pay << endl;
    }
};
class admin:virtual public person
{
public:
    void readdata2()
    {
        cout << "Enter experience of admin: ";
        cin >> experience_year;
    }
    void showdata2()
    {
        cout << "Experience year: ";
        cout << experience_year << endl;
    }
};
class master:public account, public admin
{
public:
    void readdata()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter code: ";
        cin >> code;
    }
    void showdata()
    {
        cout << "Name: " << name << endl;
        cout << "Code: " << code << endl;
    }
};
main()
{
    master m;
    m.readdata();
    m.readdata1();
    m.readdata2();

    m.showdata();
    m.showdata1();
    m.showdata2();
}
