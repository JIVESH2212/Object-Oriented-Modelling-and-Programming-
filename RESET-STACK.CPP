#include<iostream.h>
#include<conio.h>
#include<process.h>
# define size 5

class stack
{
int arr1[size],tos,arr2[10];
public:
void print();
void resetstack(stack &);
stack()
{  tos=-1;
}
int showtos(stack obj)
{
return obj.tos;
}
void push(int x)
{
tos++;
arr[tos]=x;
}
int pop()
{ int temp;
temp=arr1[tos];
tos--;
return(temp);
}
};
void stack::print()
{
for(int i=tos;i>=0;i--)
  cout<<arr1[i]<<"\t";
}
void stack::resetstack(stack &obj1)
{
int data;
static int tosn=0;
int top=obj1.tos;
for(int j=0;j<=top;j++)
  arr2[tosn++]=obj1.pop();

cout<<endl<<" Stack 1 is : "<<endl;
obj1.print();
cout<<endl<<" Stack 2 is : "<<endl;
for(int k=tosn-1;k>=0;k--)
   cout<<arr2[k]<<"\t";
}

void main()
{
clrscr();
int n,data;
stack s1,s2,s3;
char ch='y';
while(ch=='y')
{
cout<<"Press 1 to enter an element in the stack";
cout<<endl<<"Press 2 to delete an element in the stack";
cout<<endl<<"Press 3 to print all element in the stack";
cout<<endl<<"Press 4 to exit"<<endl;
cin>>n;
switch(n)
{
case 1: if(s1.showtos(s1)==size-1)
	   s2.resetstack(s1);
	else
	 {  cout<<endl<<" Enter data to insert : ";
	   cin>>data;
	   s1.push(data);
	   }
	   break;
case 2:  int del=s1.pop();
	 cout<<endl<<del<<" is the deleted element ";
	  break;
case 3:
cout<<endl<<" Stack 1 is : "<<endl;
s1.print();
break;
case 4: exit(0);
}
cout<<" Do u want to continue  (y/n)"<<endl;
cin>>ch;
}
getch();
}
