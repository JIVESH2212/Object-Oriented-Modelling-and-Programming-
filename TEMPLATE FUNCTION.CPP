#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
template<class T>
T max(T a,T b)
{
return (a>b?a:b);
}
void main()
{
clrscr();
cout<<" max(10,15) = "<<max(10,15)<<endl;
cout<<" max('k','s') = "<<max('k','s')<<endl;
cout<<" max(10.2,15.1) = "<<max(10.2,15.1)<<endl;
getch();
}