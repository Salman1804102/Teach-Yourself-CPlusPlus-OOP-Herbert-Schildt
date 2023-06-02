#include<iostream>
#include<ifstream>
#include<fstream>
using namespace std;
main()
{
    char str[80];
    cout << "Enter a string: ";
    cin >> str;
    int len = strlen(str);
    fstream file;
    cout << "Opening the text file and storing the string in it:" << endl;
    file.open("TEXT", ios::in || ios::out);
}
