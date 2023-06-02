#include<bits/stdc++.h>
using namespace std;
class Student
{
    int studentID;
    string name;
public:
    void readdata()
    {
        cout << "Enter student ID: ";
        cin >> studentID;
        cin.ignore();
        cout << "Enter name of the student: ";
        getline(cin, name);
    }
    void showdata()
    {
        cout << "Student ID is: " << studentID << endl;
        cout << "Name of the student: " << name << endl;
    }
};
class Science:public Student
{
    int phy, chem, math;
public:
    void readdata()
    {
        cout << "Enter Marks for Physics: ";
        cin >> phy;
        cout << "Enter Marks for Chemistry: ";
        cin >> chem;
        cout << "Enter Marks for Math: ";
        cin >> math;
    }
    void showdata()
    {
        cout << "Marks of Physics: " << phy << endl;;
        cout << "Marks of Chemistry: " << chem << endl;
        cout << "Marks of Math: " << math << endl;
    }
};
class Arts:public Student
{
    int eng, eco, his;
public:
    void readdata()
    {
        cout << "Enter Marks for English: ";
        cin >> eng;
        cout << "Enter Marks for History: ";
        cin >> his;
        cout << "Enter Marks for Economics: ";
        cin >> eco;
    }
    void showdata()
    {
        cout << "Marks of English: " << eng << endl;;
        cout << "Marks of History: " << his << endl;
        cout << "Marks of Economics: " << eco << endl;
    }
};
main()
{
    Science s;
    Arts a;
    s.Student::readdata();
    s.readdata();
    s.Student::showdata();
    s.showdata();
}
