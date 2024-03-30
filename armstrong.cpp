#include<iostream>
using namespace std;
int main()
{
    int n,r,sum=0;
    int m=n;

    cout<<"enter n here"<<endl;
    cin>>n;

    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;

    }

    if(sum==n)
    cout<<"armstrong";
    else
    cout<<"not armstrong";

    return 0;
}