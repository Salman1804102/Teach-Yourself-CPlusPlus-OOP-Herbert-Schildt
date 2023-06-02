#include<bits/stdc++.h>
using namespace std;
class times
{
    int hr, mins, sec;
public:
    times()
    {
        hr = 0, mins = 0, sec = 0;
    }
    times(int h, int m, int s)
    {
        hr = h; mins = m; sec = s;
    }
    friend ostream& operator << (ostream &out, times &ob);
};
ostream& operator << (ostream &out, times &ob)
{
    out << "Time is " << ob.hr << " hour: " << ob.mins << " mins: " << ob.sec << " sec";
    return out;
}
main()
{
    times ob(3, 15, 15);
    cout << ob;
}

