
#include<bits/stdc++.h>
using namespace std;
class student
{
    string s_no, s_name, dbd;
    int tariff;
    static int no_of_s;
public:
    student()
    {
        s_name = "Not Known";
        s_no = "Not Known";
        dbd = "1st January, 1995";
        tariff = 20;
    }
    void input()
    {
        cin >> s_no;
        cin >> s_name;
        cin >> dbd;
        cin >> tariff;
    }
    void print()
    {
        cout << s_no << " " << s_name << " " << dbd << " " << tariff << endl;
    }
    void student_()
    {
        no_of_s++;
    }
    void information()
    {
        cout << "Number of instance created: " << no_of_s << endl;
    }
};
int student::no_of_s;
void choice_check()
{
    cout << "\nPRESS" << endl;
    cout << "\t1. For creating student instance with unknown value." << endl;
    cout << "\t2 For creating student instance with known value." << endl;
    cout << "\t3 To display ......" << endl;
    cout << "\t4 To exit......" << endl;
    cout << "\nEnter Your Choice" << endl;
}
int main()
{
    student st_[100];
    int n, j, i = 0;
    choice_check();
    do
    {
        cin >> n;
        if(n == 1)
        {
            st_[i].student_();
            i++;
            cout << "\nEnter Your Choice" << endl;
        }
        else if(n == 2)
        {
            cout << "\nEnter Student Information: " << endl;
            st_[i].input();
            st_[i].student_();
            i++;
            cout << "\nEnter Your choice" << endl;
        }
        else if(n == 3)
        {
            cout << "\nStudent's Details: " << endl << "Student No. " << "Student Name  " << "Date of birth "  << "Tarrif" << endl;
            for(j = 0; j < i; j++)
            {
                st_[i].print();
            }
            st_[i-1].information();
            cout << "\nEnter your choice" << endl;
            cin >> n;
        }
    }
    while(n!=4);
    return 0;
}
