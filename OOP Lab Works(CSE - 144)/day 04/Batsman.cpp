#include<bits/stdc++.h>
using namespace std;
class Batsman
{
    int bcode, total_innings, notout_innings, total_runs;
    string bname;
    double calcavg()
    {
        double avg =  (double)total_runs / (total_innings - notout_innings);
        return avg;
    }
public:
    double readdata()
    {
        cin >> bcode >> bname >> total_innings >> notout_innings >> total_runs;
        return calcavg();
    }
    void display()
    {
        cout << readdata() << endl;
    }
};
int main()
{
    Batsman b;
    b.display();
    return 0;
}
