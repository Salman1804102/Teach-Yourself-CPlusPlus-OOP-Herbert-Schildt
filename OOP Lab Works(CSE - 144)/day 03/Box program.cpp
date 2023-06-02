#include<bits/stdc++.h>
using namespace std;
class BOX
{
    double length, breadth, height;
public:
    void input_value()
    {
        cin >> length >> breadth >> height;
    }
    void print_value()
    {
        cout << "Length = " << length << endl;
        cout << "Breadth = " << breadth << endl;
        cout << "Height = " << height << endl;
    }
    double volume();
};
double BOX::volume()
{
    return height * length * breadth;
}
int main()
{
//    freopen("in.txt", "rt", stdin);
//    freopen("out.txt", "wt", stdout);
    int n;
    cin >> n;
    BOX a[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Information for object " << i + 1 << " :" << endl;
        a[i].input_value();
        a[i].print_value();
        cout << "Volume = " <<  a[i].volume() << endl;
    }
    return 0;
}
