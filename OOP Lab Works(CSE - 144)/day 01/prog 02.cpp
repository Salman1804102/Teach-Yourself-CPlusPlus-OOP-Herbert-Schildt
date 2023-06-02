#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    double average ,percentage;
    int marks, tmarks = 0;
    for(int i = 0; i < 5; i++)
    {
        cin >> marks;
        tmarks += marks;
    }
    cout << "Total marks: " << tmarks << endl;
    cout << "Average marks: " << tmarks / 5.0 << endl;
    cout << "Percentage: " << 100 * tmarks / 500.00 << endl;
    return 0;
}
