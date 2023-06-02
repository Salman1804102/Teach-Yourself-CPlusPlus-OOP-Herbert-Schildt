#include<bits/stdc++.h>
using namespace std;
void date(char *date);
void date(int month, int day, int year);
int main(void)
{
    date("16/11/1999");
    date(16, 11, 1999);
    return 0;
}
void date(char *date)
{
    cout << "Date: " << date << endl;
}
void date(int day, int month, int year)
{
    cout << "Date: " << day;
    cout << "/" << month << "/" << year << endl;
}

