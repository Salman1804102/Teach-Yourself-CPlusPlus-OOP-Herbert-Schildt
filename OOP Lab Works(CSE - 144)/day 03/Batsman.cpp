#include<iostream>
using namespace std;
class Batsman
{
private:
    int bcode,total_ing,notout_ing,total_runs;
    string name;
    double batting_avg;
    double calculate_avg()
    {
        batting_avg=(total_runs/(total_ing-notout_ing));
        return batting_avg;
    }
public:
    int read_data(int a,int b,int c,int p,string str)
    {
        bcode=a;
        total_ing=b;
        notout_ing=c;
        total_runs=p;
        name=str;
    }
    void dispaly_result()
    {
        cout<<"Total_runs = "<< total_runs <<endl;
        cout<<"Batsman's name = "<< name <<endl;
        cout<<"Code = "<< bcode <<endl;
        cout<<"Total ing = "<< total_ing <<endl;
        cout<<"Not out_ing = "<< notout_ing <<endl;
    }
    double result()
    {
        return calculate_avg();
    }
};
int main()
{
    Batsman ob;
    int a, b, c, d;
    string m;
    cin >> a >> b >> c >> d >> m;
    ob.read_data(a,b,c,d,m);
    ob.dispaly_result();
    cout<<"Average calculation: "<<ob.result()<<endl;
    return 0;
}
