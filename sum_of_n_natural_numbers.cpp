#include<iostream>
using namespace std;

int main()
{
    int i,n,sum=0;

    cout<<"enter n here"<<endl;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }

    cout<<"sum of natural no is"<<sum;
    return 0;
}