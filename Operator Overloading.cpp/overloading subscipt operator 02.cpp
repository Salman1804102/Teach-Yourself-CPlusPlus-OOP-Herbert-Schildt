#include<bits/stdc++.h>
using namespace std;
const int SIZE = 5;
class arraytype
{
    int a[SIZE];
public:
    arraytype()
    {
        for(int i = 0; i < SIZE; i++)
            cin >> a[i];
    }
    int &operator[](int i)
    {
        return a[i];
    }
};
main()
{
    arraytype ob;
    for(int i = 0; i < SIZE; i++)
        ob[i] = ob[i] + 10;
   for(int i = 0; i < SIZE; i++)
    cout << ob[i] << " ";
}
