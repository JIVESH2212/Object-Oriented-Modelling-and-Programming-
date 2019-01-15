#include<conio.h>
#include<iostream.h>
#include<stdlib.h>
#define MAX 25

class stack
{

int size;
int *p;
int top;
public:
static int *buff;
static int btop;

stack()
{
size=3;
p=new int[3];
top=-1;
//btop=-1;
//buff=new int[MAX];
}
stack(int n)
{
 size=n;
 p=new int[n];
 top=-1;
// btop=-1;
//buff=new int[MAX];
}

void push(int n)
{
if(top==size-1)
cout<<"Stack is full";
else
p[++top]=n;
}
void pop()
{
  if(top!=-1)
    top--;
}


~stack()
{
cout<<"DESTRUCTOR IS EVOKED";
//int i=0;
//while(i<=btop)
//cout<<buff[i++]<<" ";
}
void show();
void reset();
};
void stack ::show()
{
int i=0;
while(i<=top)
cout<<" "<<p[i++];
}
void stack::reset()
{
while(top!=-1)
buff[++btop]=p[top--];
}
int stack::btop=-1;
int* stack::buff=new int[MAX];
void main()
{
 clrscr();
 stack a;
 {
 stack b;
 a.push(1);
 a.push(2);
 a.push(3);
 a.push(4);
 a.reset();
 cout<<"\n A : ";
 a.show();
 }
// ~stack{ };
  getch();
 }
