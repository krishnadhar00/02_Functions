#include<iostream>
using namespace std;
void printName(int &a , int &b)  // formal parameter
{
    a = 100;
    b = 50;
    cout<<a<<" "<<b<<endl;
}
int main()
{
    int a,b;
    cin>>a>>b;
    printName(a,b);  // actual parameter.
    cout<<a<<" "<<b<<endl;
}

// It is call by reference because here it is passed by ampersand and both varaible address are lie at the same.
// formal paramter address and actual paramter address are at the same point.