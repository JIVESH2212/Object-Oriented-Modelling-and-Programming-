#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
template<class T>
class vector
{
T*v;
int size;
public:
vector(int s)
{
size=s;
v=new T[size];
}
~vector()
{
delete v;
}
T & getelement(int);
void displayvector();
};
template<class T>
T & vector<T>::getelement(int i)
{
if(i>=size)
cout<<endl<<" Out of range "<<endl;
return v[i];
}
template<class T>
void vector<T>::displayvector()
{
for(int i=0;i<size;i++)
cout<<getelement(i)<<" , ";
}
void main()
{
clrscr();
int i;
vector<int>iv(5);
vector<float>fv(10);
for(i=0;i<5;i++)
iv.getelement(i)=i+1;
for(i=0;i<10;i++)
fv.getelement(i)=float(i+1.5);
cout<<endl<<" Integer Vector ... "<<endl;
iv.displayvector();
cout<<endl<<" Float Vector ... "<<endl;
fv.displayvector();
cout<<endl;
getch();
}
