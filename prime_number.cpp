#include<iostream>
using namespace std;

int main()
{
    int i,n,count=0;
    
    cout<<"enter n here"<<endl;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            count++;
    }
    
    if(count==2)
        cout<<"prime";
    else
        cout<<"not prime";
    
   
}