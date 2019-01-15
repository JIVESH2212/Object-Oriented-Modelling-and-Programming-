#include<iostream.h>
#include<conio.h>
class one
{
int a;
public:
int x;
one()
{
a=0;
}
void geta()
{
cout<<" Enter a value "<<endl;
cin>>a;
x=a;
}
void puta()
{
cout<<" The entered value is "<<a<<endl;
}
};

class two
{
int b;
public:
int y;
two()
{
b=0;
}
void getb()
{
cout<<" Enter a value "<<endl;
cin>>b;
y=b;
}
void putb()
{
cout<<" The entered value is "<<b<<endl;
}
};

class three
{
int c;
public:
int z;
three()
{
c=0;
}
void getc()
{
cout<<" Enter a value "<<endl;
cin>>c;
z=c;
}
void putc()
{
cout<<" The entered value is "<<c<<endl;
}
};

class althree:public one,public three,public two
{
int sum;
allthree()
{
sum=0;
}
public:
void calc()
{
sum=x+y+z;
cout<<" The Sum of all 3 values is "<<sum<<endl;
}
};
void main()
{
clrscr();
char ch='y';
while(ch=='y')
{
althree p;
p.geta();
p.puta();
p.getb();
p.putb();
p.getc();
p.putc();
p.calc();
cout<<" Do u want to continue  y/n "<<endl;
cin>>ch;
}
getch();
}