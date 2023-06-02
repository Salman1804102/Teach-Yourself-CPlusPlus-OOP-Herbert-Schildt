#include<iostream>
using namespace std;
main()
{
    int SIZE = 20;
    char city[20];
    cout << "Enter city name: ";
    cin >> city;
    cout << "City name: " << city << endl;
    cout << "Enter city name again: ";
    cin.getline(city, SIZE);
    cout << "City name now: " << city << endl << endl;
    cout << "Enter another city name : ";
    cin.getline(city, SIZE);
    cout << "New city name: " << city << endl;
}
