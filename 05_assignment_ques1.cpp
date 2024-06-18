// print square of first 5 natural number.
#include<iostream>
using namespace std;
void printNumber(int x)
{
    cout<<x*x<<" ";
}
int main()
{
    for(int i=1;i<=5;i++)
    {
        printNumber(i);
    }
}