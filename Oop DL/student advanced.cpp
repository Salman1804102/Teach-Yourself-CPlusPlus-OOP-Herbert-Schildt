#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    int roll;
    int marks;
    string name;
    void readdata()
    {
        cout << "Enter roll number: ";
        cin >> roll;
        cin.ignore();
        cout << "Enter name: ";
        getline(cin, name);
    }
    void showdata()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
    }
};
class Physics:public student
{
public:
    void readata()
    {
        cout << "Enter the marks in Physics: ";
        cin >> marks;
    }
};
class Chemistry:public student
{
public:
    void readdata()
    {
        cout << "Enter the marks in Chemistry: ";
        cin >> marks;
    }
};
class Mathematics:public student
{
public:
    void readdata()
    {
        cout << "Enter the marks in Mathematics: ";
        cin >> marks;
    }
};
main()
{
    int n, total;
    cout << "Enter total number of student: ";
    cin >> n;
    Physics p;
    Mathematics m;
    Chemistry c;
    for(int i = 0; i < n; i++)
    {
        p.student::readdata();
        p.readdata();
        m.readdata();
        c.readdata();
        total = p.marks + m.marks + c.marks;
        double average = (double) total / n;
        p.student::showdata();
        cout << "Total Marks = " << total << endl;
        cout << "Average Marks = " << average << endl;
    }
}
