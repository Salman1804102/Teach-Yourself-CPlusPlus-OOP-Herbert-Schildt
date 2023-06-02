#include<bits/stdc++.h>
using namespace std;
class vehicle
{
    int num_wheels;
    int range;
public:
    vehicle(int w, int r)
    {
        num_wheels = w;
        range = r;
    }
    void showv()
    {
        cout << "Wheels: " << num_wheels << endl;
        cout << "Range: " << range << endl;
    }
};
class car:public vehicle
{
    int passengers;
public:
    car(int p, int wheel, int r):vehicle(wheel, r)
    {
        passengers = p;
    }
    void show()
    {
        showv();
        cout << "Passengers: " << passengers << endl;
    }
};
class truck: public vehicle
{
    int loadlimit;
public:
    truck(int l, int wheel, int r):vehicle(wheel, r)
    {
        loadlimit = l;
    }
    void show()
    {
        showv();
        cout << "loadlimit: " << loadlimit << endl;
    }
};
int main()
{
    car c(5, 4, 500);
    truck t(30000, 12, 1200);
    cout << "Car: " << endl;
    c.show();
    cout << endl << "Truck: " << endl;
    t.show();
    return 0;
}
