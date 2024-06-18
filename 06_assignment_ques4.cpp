// give the all odd number from range a to b.
#include<iostream>
using namespace std;
void checkNumber(int a, int b)
{
    for(int i=a;i<=b;i++)
    {
        if(i%2!=0)
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    checkNumber(a,b);
}