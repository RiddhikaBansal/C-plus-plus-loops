#include<iostream>
using namespace std;
int main()
{
    int i,n;

    cout<<"enter n here"<<endl;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        cout<<i<<" ";

    }
    return 0;
}