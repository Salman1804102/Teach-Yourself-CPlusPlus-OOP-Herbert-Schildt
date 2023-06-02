#include<bits/stdc++.h>
using namespace std;
class Patient
{
protected:
    string name, disease;
};
class In_patient:public Patient
{
    int rent;
public:
    In_patient(string s1, string s2, int r)
    {
        name = s1;
        disease = s2;
        rent = r;
    }
    void put_data()
    {
        cout << "Patient Name: " << name << endl;
        cout << "Disease: " << disease << endl;
        cout << "Rent: " << rent << endl;
    }
};
class Out_patient:public Patient
{
    int OPD_charges;
public:
    Out_patient(string s1, string s2, int opd)
    {
        name = s1;
        disease = s2;
        OPD_charges = opd;
    }
    void put_data()
    {
        cout << "Patient Name: " << name << endl;
        cout << "Disease: " << disease << endl;
        cout << "OPD charges: " << OPD_charges << endl;
    }
};
main()
{
    In_patient ob1("Rahim", "Bronchitis", 20000);
    Out_patient ob2("Karim", "Heart Failure", 50000);
    ob1.put_data();
    ob2.put_data();
}
