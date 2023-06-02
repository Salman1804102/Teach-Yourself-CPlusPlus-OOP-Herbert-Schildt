#include<bits/stdc++.h>
using namespace std;
main()
{
    ofstream fout("input");
    string name;
    cin >> name;
    fout << name;
    fout.close();
    ifstream fin("input");
    fin >> name;
    cout << name << endl;
}
