#include<bits/stdc++.h>
using namespace std;
class Planet
{
    string name;
    double dist, diameter;
    int moons;
public:
    void set_planet_name()
    {
        cin >> name;
    }
    void set_no_of_moon()
    {
        cin >> moons;
    }
    void set_diameter()
    {
        cin >> diameter;
    }
    void set_distance_from_sun()
    {
        cin >> dist;
    }
    void get_planet_name()
    {
        set_planet_name();
    }
    void get_no_of_moons()
    {
        set_no_of_moon();
    }
    void get_diameter()
    {
        set_diameter();
    }
    void get_distance_from_sun()
    {
        set_distance_from_sun();
    }
    friend double light(Planet ob);
};
double light(Planet ob)
{
    ob.get_planet_name();
    ob.get_distance_from_sun();
    ob.get_diameter();
    ob.get_no_of_moons();
    return (ob.dist * 1000000)/ 186000.0;
}
int main()
{
    Planet ob;
    int tc;
    cin >> tc;
    while(tc--)
    {
        cout << light(ob) << endl;
    }
    return 0;
}
