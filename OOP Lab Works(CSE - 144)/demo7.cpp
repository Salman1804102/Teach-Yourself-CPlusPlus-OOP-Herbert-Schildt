#include<bits/stdc++.h>
using namespace std;
class Marks
{
    int roll, marks;
    string name;

};
class physics:public Marks
{
public:
    void readphy()
    {
        cout << "Enter the marks in Physics: " << marks << endl;
    }
};
class chemistry:public Marks
{
public:
    void readchem()
    {
        cout << "Enter the marks in Chemistry: " << marks << endl;
    }
};
class maths:public Marks
{
public:
    void readmaths()
    {
        cout << "Enter the marks in Mathematics: " << marks << endl;
    }
};
main()
{
    chemistry c;
    physics p;
    maths m;
    double avg;
    int noofstd, total;
    cout << "Enter Total Number of Student: ";
    cin >> noofstd;
    for(int i = 0; i < noofstd; i++)
    {
        c.readphy()
    }
}
