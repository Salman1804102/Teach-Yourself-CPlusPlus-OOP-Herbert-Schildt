#include<bits/stdc++.h>
using namespace std;
main()
{
    float height[5] = {175.5, 5.153, 0.167, 25.160, 70};
    ofstream outfile;
    outfile.open("TEXT");
    outfile.write((char *) &height, sizeof(height));
    outfile.close();
    for(int i = 0; i < 5; i++)
        height[i] = 0;
    ifstream infile;
    infile.open("TEXT");
    infile.read((char *) &height, sizeof(height));
    for(int i = 0; i < 5; i++)
    {
        cout.setf(ios::showpoint, ios::floatfield);
        cout.setf(ios::fixed, ios::floatfield);
        cout << setw(10) << setprecision(2) << height[i];
    }
    infile.close();
}
