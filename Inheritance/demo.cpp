#include<bits/stdc++.h>
using namespace std;
class B1
{
public:
    int a;
};
class D1:virtual public B1
{
public:
    int b;
};
class D2:virtual public B1
{
public:
    int c;
};
class D3: public D1, public D2
{
public:
    int product(){return a * b * c;}
};
main()
{
    D3 ob;
    ob.a = 10;
    ob.b = 20;
    ob.c  = 30;
    cout << "Product is " << ob.product() << endl;
}
