#include<bits/stdc++.h>
using namespace std;
class INVETORY
{
    char name[20];
    int code;
    float cost;
public:
    void getdata()
    {
        cout << "Enter name: "; cin >> name;
        cout << "Enter code: "; cin >> code;
        cout << "Enter cost: "; cin >> cost;
    }
    void putdata()
    {
        cout << setw(10) << name
        << setw(10) << code
        << setprecision(2) << setw(10)
        << cost << endl;
    }
};
main()
{
    INVENTORY item;
    fstream inoutfile;
    inoutfile.open("STOCK.text", ios::ate | ios::in | ios::out || ios::binary);
    inoutfile.seekg(0, ios::beg);
    cout << "CURRENT CONTENTS OF STOCK" << endl;
    while(inoutfile.read((char *) & item, sizeof item));
    {
        item.putdata();
    }
    inoutfile.clear();
    cout << "And an item" << endl;
    item.getdata();
    char ch;
    cin.get(ch);
    inputfile.write((char *) & item, sizeof item);
    inoutfile.seekg(0);
    cout << "CONTENTS OF APPENDED FILE" << endl;
    while(inoutfile.read((char *)) & item, sizeof item);
    {
        item.putdata();
    }
    int last = inoutfile.tellg();
    int n =
}
