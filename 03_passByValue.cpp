#include<iostream>
using namespace std;
void printName(int a , int b)  // formal parameter
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

// It si acall by value because ampersand is not there and here copy is created.