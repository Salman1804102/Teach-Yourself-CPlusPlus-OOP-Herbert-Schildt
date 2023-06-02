#include<bits/stdc++.h>
using namespace std;
class Person
{
public:
    char *name;
    int age;
    Person()
    {
        name = "Unknown";
        age = 18;
    }
    Person(char *str)
    {
        strcpy(name, str);
        age = 18;
    }
    Person(char *str, int n)
    {
        strcpy(name, str);
        age = n;
    }
    Person(Person &ob)
    {
        ob.name = name;
        ob.age = age;
    }
    virtual void displaydata()
    {
        cout << "Name: " << name << endl;
        cout << "Age : " << age << endl;
    }
};
class Student:public Person
{
    float CGPA;
public:
    Student(float cgkoto, char *str, int age):Person(str, age)
    {
        CGPA = cgkoto;
    }
    Student(float cgkoto, char *str):Person(str)
    {
        CGPA = cgkoto;
    }
    Student(float cgkoto, Person &ob):Person(ob)
    {
        CGPA = cgkoto;
    }
    void displaydata()
    {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << setprecision(2) << CGPA << endl;
    }
};
class Professors:public Person
{
    int noofpub;
public:
    Professors(int pub, char *str, int age):Person(str, age)
    {
        noofpub = pub;
    }
    Professors(int pub, char *str):Person(str)
    {
        noofpub = pub;
    }
    Professors(int pub, Person &ob):Person(ob)
    {
        noofpub = pub;
    }
    void displaydata()
    {
        cout << "Name: " << name << endl;
        cout << "Number of Publications: " << noofpub << endl;
    }
};
main()
{
    Person *p;
    Student s(3.57, "Salman Farsi", 20);
    Professors l(10, "Omor Sharif", 26);
    p = &s;
    p->displaydata();
    p = &l;
    p->displaydata();
}
