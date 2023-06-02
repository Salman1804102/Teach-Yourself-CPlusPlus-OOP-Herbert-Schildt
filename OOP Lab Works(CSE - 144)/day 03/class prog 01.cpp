#include<bits/stdc++.h>
using namespace std;
class AREA
{
    double len, width;
    public:
    void take_input();
    double calculate_area();
};
double AREA::calculate_area()
{

    take_input();
    return len * width;
}
void AREA::take_input()
{
    cin >> len >> width;
}
int main()
{
    AREA ob;
   double ans =  ob.calculate_area();
   cout << ans << endl;
}
