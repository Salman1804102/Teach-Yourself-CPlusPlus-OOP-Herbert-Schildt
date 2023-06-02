#include<bits/stdc++.h>
using namespace std;
class student
{
protected:
    int student_ID;
    string name;
public:
    void readdata()
    {
        cout << "Enter the student id: ";
        cin >> student_ID;
        cin.ignore();
        cout << "Enter the name: ";
        getline(cin, name);
    }
    void showdata()
    {
        cout << "Student ID: " << student_ID << endl;
        cout << "Name: " << name << endl;
    }
};
class Science:public student
{
    int phy, chem, math;
public:
    void readdata()
    {
        cout << "Enter Marks for physics: ";
        cin >> phy;
        cout << "Enter Marks for chemistry: ";
        cin >> chem;
        cout << "Enter Marks for Mathematics: ";
        cin >> math;
    }
    void showdata()
    {
        cout << "Marks of Physics: " << phy << endl;
        cout << "Marks of Chemistry: " << chem << endl;
        cout << "Marks of Mathematics: " << math << endl;
    }
};
class Arts:public student
{
    int eng, his, eco;
public:
    void readdata()
    {
        cout << "Enter Marks for Economics: ";
        cin >> eng;
        cout << "Enter Marks for History: ";
        cin >> his;
        cout << "Enter Marks for Economics: ";
        cin >> eco;
    }
    void showdata()
    {
        cout << "Marks of English: " << eco << endl;
        cout << "Marks of History: " << his << endl;
        cout << "Marks of Economics: " << eco << endl;
    }
};
main()
{
    Science s;
    Arts a;
    s.student::readdata();
    s.student::showdata();
    s.readdata();
    s.showdata();

    cout << endl;

    a.student::readdata();
    a.student::showdata();
    a.readdata();
    a.showdata();
}
