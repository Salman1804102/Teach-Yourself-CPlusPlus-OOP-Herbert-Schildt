#include<bits/stdc++.h>
using namespace std;
main()
{
    ofstream outfile("ITEM");
    cout << "Enter item name: ";
    char name[30];
    cin >> name;
    outfile << name << endl;
    cout << "Enter item cost: ";
    double cost;
    cin >> cost;
    outfile << cost << endl;
    outfile.close();
    ifstream infile("ITEM");
    infile >> name;
    infile >> cost;
    cout << endl;
    cout << "Item name: " << name << endl;
    cout << "Item cost: " << cost << endl;
    infile.close();
}
