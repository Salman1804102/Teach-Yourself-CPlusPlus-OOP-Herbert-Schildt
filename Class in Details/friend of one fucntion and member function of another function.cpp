#include<bits/stdc++.h>
using namespace std;
class car;
class truck
{
    int speeds;
    int passengers;
public:
    truck(int s, int p)
    {
        speeds = s;
        passengers = p;
    }
     int sp_comparison(car c);
};
class car
{
    int passengers;
    int speed;
public:
    car(int s, int p)
    {
        passengers = p;
        speed = s;
    }
    friend int truck::sp_comaprison(car c);
};
int truck::sp_comaprison(car c)
{
    return c.speed - speeds;
}
int main()
{
    int t;
    car c1(55, 6);
    truck t1(1000, 55);
    cout << "Comparing c1 and t1: " << endl;
    t = t1.sp_comaprison(c1);
    if(t < 0) cout << "Truck is faster" << endl;
    else if(t == 0) cout << "Car and Truck speed is the same" << endl;
    else cout << "Car is faster" << endl;
    return 0;
}

