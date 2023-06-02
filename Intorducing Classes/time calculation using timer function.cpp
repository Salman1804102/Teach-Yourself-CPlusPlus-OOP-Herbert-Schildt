#include<bits/stdc++.h>
using namespace std;
class timer
{
    clock_t start;
public:
    timer();
    ~timer();
};
timer::timer()
{
    start = clock();
}
timer::~timer()
{
    clock_t ends;
    ends = clock();
    cout << "Elapsed time = " << (ends - start) / CLOCKS_PER_SEC << endl;
}
int main()
{
    timer ob;
    char ch;
    cout << "Press a key followed by ENTER: " ;
    cin >> ch;
    return 0;
}
