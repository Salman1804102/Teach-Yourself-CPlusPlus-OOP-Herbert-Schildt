#include<bits/stdc++.h>
using namespace std;
class INVENTORY
{
    char name[10];
    int code;
    float cost;
public:
    void readdata();
    void writedata();
};
void INVENTORY::readdata()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter code: ";
    cin >> code;
    cout << "Enter cost: ";
    cin >> cost;
}
void INVENTORY::writedata()
{
    cout.setf(ios::fixed, ios::floatfield);
    cout << setiosflags(ios::left)
         << setw(10) << name
         << setiosflags(ios::right)
         << setw(10) << code
         << setprecision(2)
         << setw(10) << cost << endl;
}
main()
{
    INVENTORY item[3];
    fstream file;
    file.open("STOCK.text", ios::in | ios::out);
    cout << "Enter details for three items\n";
    for(int i = 0; i < 3; i++)
    {
        item[i].readdata();
        file.write( (char *) & item[i], sizeof(item[i]));
    }
        file.seekg(0);
        cout << "\nOutput\n";
        for(int i = 0; i < 3; i++)
        {
            file.read((char *) & item[i], sizeof(item[i]));
            item[i].writedata();
        }
        file.close();
}
