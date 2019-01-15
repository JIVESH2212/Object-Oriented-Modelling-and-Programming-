#include<iostream>
using namespace std
int main()
{
int a,b;
cout<<" Enter any 2 values"<<endl;
cin>>a>>b
int x=a-b;
try
{
if(x!=0)
    cout<<" Result is "<<a/x<<endl;
else
    throw(x);
    }
catch(int i)
{
    cout<<" Exception caught : DIVIDE BY ZERO "<<endl;
}
cout<<" END ";
}
