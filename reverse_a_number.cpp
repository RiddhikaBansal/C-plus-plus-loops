#include<iostream>
using namespace std;
int main()
{
    int r,i,n;

    cout<<"enter n here"<<endl;
    cin>>n;

    int rev=0;

    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    cout<<rev;
    return 0;
}