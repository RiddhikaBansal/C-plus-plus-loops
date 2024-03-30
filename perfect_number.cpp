#include<iostream>
using namespace std;

int main()
{
    int i,n,sum=0;

    cout<<"enter n here"<<endl;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==2*n)
        cout<<"perfect";
    else
        cout<<"not perfect";
        }