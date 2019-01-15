#include<iostream.h>
#include<conio.h>
class TWO;

class ONE
{
int data;
public:
void set(int value)
{
data=value;
}
friend void add(ONE,TWO);
}obj1;

class TWO
{
int data;
public:
void set(int value)
{
data=value;
}
friend void add(ONE,
TWO);
}obj2;

void add(ONE obj1,TWO obj2)
{
cout<<" Sum is : "<< obj1.data + obj2.data<<endl;
}
void main()
{
int a,b;
clrscr();
ONE obj1;
TWO obj2;
cout<<" Enter value "<<endl;
cin>>a;
cout<< " Enter another value "<<endl;
cin>>b;
obj1.set(a);
obj2.set(b);
add(obj1,obj2);
getch();
}

