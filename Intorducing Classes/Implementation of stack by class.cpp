#include<bits/stdc++.h>
#define SIZE 1000
using namespace std;
class mystack
{
    char s[SIZE];
    int top;
public:
    void init();
    void push(char ch);
    char pop();
};
void mystack::init()
{
    top = 0;
}
void mystack::push(char ch)
{
    if(top == SIZE)
    {
        cout << "Stack is full" << endl;
        return;
    }
    s[top] = ch;
    top++;
}
char mystack::pop()
{
    if(top == 0)
    {
        cout << "Stack is empty" << endl;
        return 0;
    }
    top--;
    return s[top];
}
int main(void)
{
    mystack s1, s2;
    int i;
    s1.init();
    s2.init();
    s1.push('s');
    s2.push('x');
    s1.push('a');
    s2.push('y');
    s1.push('l');
    s2.push('z');
    s1.push('m');
    s1.push('a');
    s1.push('n');
    for(int i = 0; i < 6; i++)
        cout << "Pop s1: " << s1.pop() << "\n";
    cout << endl;
    for(int i = 0; i < 3; i++)
        cout << "Pop s2: " << s2.pop() << "\n";
    return 0;
}
