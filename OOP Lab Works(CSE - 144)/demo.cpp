#include<bits/stdc++.h>
using namespace std;
class Complex
{
    int i, j;
public:
    Complex()
    {
        i = 0;
        j = 0;
    }
    Complex(int x, int y)
    {
        i = x;
        j = y;
    }
    void shownum()
    {
        cout << i << "+" << j << "i" << endl;
    }
    Complex operator-(Complex &ob2)
    {
        Complex temp;
        temp.i = i - ob2.i;
        temp.j = j - ob2.j;
        return temp;
    }
};
main()
{
    Complex ob1(10, 15), ob2(5, 10), ob3;
    ob3 = ob1 - ob2;
    ob3.shownum();
}
