#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("country");
    fout << "United States of America" << endl;
    fout << "United Kingdom" << endl;
    fout << "South Korea" << endl;
    fout.close();
    fout.open("capital");
    fout << "New York" << endl;
    fout << "London" << endl;
    fout << "Seoul" << endl;
    fout.close();
    string line;
    ifstream fin;
    fin.open("country");
    cout << "contents of country file" << endl;
    while(fin)
    {
        getline(fin, line);
        cout << line << endl;
    }
    fin.close();
    fin.open("capital");
    cout << "contents of capital file" << endl;
    while(fin)
    {
        getline(fin, line);
        cout << line << endl;
    }
    fin.close();
}
