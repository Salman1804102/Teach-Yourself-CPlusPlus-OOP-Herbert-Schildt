#include<bits/stdc++.h>
using namespace std;
class Apple
{
protected:
    int noOFapple;
public:
    void readApple_data()
    {
        cout << "Enter Number of Apple: ";
        cin >> noOFapple;
    }
    void showApple_data()
    {
        cout << "Number of Apples in the basket: " << noOFapple << endl;
    }
};
class Mangoes
{
protected:
    int noOFmangoes;
public:
    void readMangoes_data()
    {
        cout << "Enter number of Mangoes: ";
        cin >> noOFmangoes;
    }
    void showMangoes_data()
    {
        cout << "Number of Mangoes in the basket: " << noOFmangoes << endl;
    }
};
class Fruit:public Apple, public Mangoes
{
    int total;
public:
    void showtotal()
    {
        total = noOFapple + noOFmangoes;
        cout << "Total number of fruits in the basket =  " << total << endl;
    }
};
main()
{
    Fruit f;
    f.readApple_data();
    f.showApple_data();
    f.readMangoes_data();
    f.showMangoes_data();
    f.showtotal();
}
