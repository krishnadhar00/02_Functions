// local and global variable name is same.
#include<iostream>
using namespace std;
int p =5;
int main()
{
    int p = 10;
    cout<<p<<endl; // local have more priority if the variabel name is same.
    cout<<::p;  // using scope resolution we can access the global varaible's value.
}
