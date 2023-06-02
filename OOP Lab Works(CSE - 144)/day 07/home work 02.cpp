#include<bits/stdc++.h>
using namespace std;
class Play
{
    int Playcode, No_of_scenes;
    string PlayTitle;
    double Duration;
public:
    Play()
    {
        Duration = 45;
        No_of_scenes = 5;
    }
    void Newplay()
    {
        cout<<"Enter value of Playcode and PlayTitle" << endl;
        cin>>Playcode>>PlayTitle;
    }
    void Newinfo(int d, int n)
    {
        Duration=d;
        No_of_scenes =n;
    }
    void Showplay()
    {
        cout<<"Displaying all data members:\n";
        cout<<"Play Code: "<<Playcode<<endl;
        cout<<"Play Title: "<<PlayTitle<<endl;
        cout<<"Duration: "<<Duration<<endl;
        cout<<"No. of Scenes: "<<No_of_scenes<<endl;
    }
};
int main()
{
    Play P;
    P.Newplay();
    P.Newinfo(150,4);
    P.Showplay();
    return 0;
}
