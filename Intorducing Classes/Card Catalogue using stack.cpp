#include<bits/stdc++.h>
using namespace std;
class library
{
    char author[30];
    char title[30];
    int num;
public:
    void store(char s1[], char s2[], int n);
    void show();
};
void library::show()
{
    cout << "Title of the book: " << title << endl;
    cout << "Name of the author: " << author << endl;
    cout << "Number of copies available: " << num << endl;
    return;
}
void library::store(char s1[], char s2[], int n)
{
    strcpy(title, s1);
    strcpy(author, s2);
    num = n;
    show();
    return;
}
int main(void)
{
    library b1, b2;
    b1.store("Teach Yourself C++", "Herbert Schildt", 1);
    return 0;
}
