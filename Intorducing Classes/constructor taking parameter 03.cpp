#include<bits/stdc++.h>
#define SIZE 10
using namespace std;
class stacks
{
    char stck[SIZE];
    int top;
    char who;
public:
    stacks(char c);
    void push(char ch);
    char pop();
};
stacks::stacks(char c)
{
    top = 0;
    who = c;
    cout << "Constructing stack " << who << endl;
}
void stacks::push(char ch)
{
    if(top == SIZE)
    {
        cout << "Stack " << who << "is full" << endl;
        return;
    }
    stck[top] = ch;
    top++;
}
char stacks::pop()
{
    if(top == 0)
    {
        cout << "Stack " << who << " is empty" << endl;
        return 0;
    }
    top--;
    return stck[top];
}
int main()
{
    stacks s1('A'), s2('B');
    int i;
    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');
    for(int i = 0; i < 5; i++)
        cout << "Pop s1: " << s1.pop() << endl;
    for(int i = 0; i < 5; i++)
        cout << "Pop s2: " << s2.pop() << endl;
    return 0;
}
