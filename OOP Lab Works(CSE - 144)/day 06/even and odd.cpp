#include<bits/stdc++.h>
using namespace std;
class IntegerFactory
{
    int choice, n;
    int ara[1000];
public:
    int calsum()
    {
        int sum = 0;
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> ara[i];
        cin >> choice;
        if(choice == 1)
        {
            for(int i = 0; i < n; i++)
            {
                if(ara[i] % 2 == 0)
                    sum += ara[i];
            }
        }
        else if(choice == 0)
        {
            for(int i = 0; i < n; i++)
            {
                if(ara[i] % 2)
                    sum += ara[i];
            }
        }
        return sum;
    }
};
int main()
{
    IntegerFactory f;
    cout << f.calsum() << endl;
    return 0;
}
