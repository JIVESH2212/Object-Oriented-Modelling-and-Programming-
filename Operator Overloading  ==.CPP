#include<iostream.h>
#include<conio.h>
class test
{
int a;
public:
test()
{
a=0;
}
void input()
{
cout<<" Enter a value "<<endl;
cin>>a;
}
void output()
{
cout<<" The value entered is   "<<a<<endl;
}
void operator++(test obj2)
{
if((a++obj2.a)==5)
cout<<" The two values  have sum 5  "<<endl;
else
cout<<" The two values have different sum "<<endl;
}

};
void main()
{
clrscr();
char ch='y';
cout<<" Program to show operator( ++ ) overloading "<<endl;
while(ch=='y')
{
test obj1,obj2;
obj1.input();
obj1.output();
obj2.input();
obj2.output();
obj1++obj2;
cout<<" Do u want to continue y/n  "<<endl;
cin>>ch;
}
getch();
}

