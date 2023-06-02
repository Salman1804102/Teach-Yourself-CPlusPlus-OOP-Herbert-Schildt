#include<bits/stdc++.h>
using namespace std;
class Apples
{
    public:
    int apple;
    void read()
    {
        cout << "Enter the number of Apples: ";
        cin >> apple;
    }
    void show()
    {
        cout << "Number of Apples in the basket = " << apple << endl;
    }
};
class Mangoes
{
    public:
    int mng;
    void read()
    {
        cout << "Enter the number of Mangoes: ";
        cin >> mng;
    }
    void show()
    {
        cout << "Number of Mangoes in the basket = " << mng << endl;
    }
};
class Fruits:public Apples, public Mangoes
{
    public:
    void show()
    {
        cout << "Total number of fruits = " << apple + mng << endl;
    }
};
main()
{
    Fruits f;

    f.Apples::read();
    f.Apples::show();

    f.Mangoes::read();
    f.Mangoes::show();
    cout << endl;
    f.show();
}
