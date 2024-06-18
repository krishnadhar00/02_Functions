// give prime number from the range a to b.
#include<iostream>
using namespace std;
void checkPrime(int a, int b)
{
    for(int i=a;i<=b;i++)
    {
        if(i==2)
        {
            cout<<i<<" ";
        }
        else if(i==3)
        {
            cout<<i<<" ";
        }
        else if(i%2!=0 && i%3!=0)
        {
            cout<<i<<" ";
        }
    }

}
int main()
{
    int a,b;
    cin>>a>>b;
    checkPrime(a,b);
}