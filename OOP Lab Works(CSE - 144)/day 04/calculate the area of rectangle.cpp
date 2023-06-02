#include<bits/stdc++.h>
using namespace std;
class Rectangle
{
    double len, width;
public:
    double calArea()
    {
        cin >> len >> width;
        return len * width;
    }
};
int main()
{
    Rectangle r;
    cout << r.calArea() << endl;
    return 0;
}
