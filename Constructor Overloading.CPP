#include<iostream.h>
#include<conio.h>
//#typedef int float
/*union Data
{
int a;
float b;
}data;
*/
class operation
{
float area;
public:
operation()
{
area=0;
cout<<"No parameters are passed\n";
}
operation(int a,int b)
{
area=a*b;
cout<<"Constructor of 2 integer numbers passed in parameter is called\n";
}
/*operation(int a, float b)
{
area=a*b;
cout<<"Constructor of 1 int and 1 float number passed in parameter is called\n";
}*/
operation(float a, int b)
{
area=a*b;
cout<<"Constructor of 1 float and 1 int number passed in parameter is called\n";
}
operation(float a,float b)
{
area=a*b;
cout<<"Constructor of 2 float numbers passed in parameter is called\n";
}

void putdata()
{
  cout<<"The area is "<<area<<endl;
}
};
void main()
{
int ch1;
char ch='y';
clrscr();
//union Data data;
while(ch=='y')
{
cout<<"Press 1 to enter 2 int values\n";
cout<<"Press 2 to enter 1 float and 1 int value\n";
cout<<"Press 3 to enter 2 float values\n";
cin>>ch1;

switch(ch1)
{
case 1:{ int a,b;
	 cout<<"Enter the 2 numbers ";
	 cin>>a>>b;
	 operation p(a,b);
	 p.putdata();
	 break;
       }
case 2:{ float a;
	 int b;
	 cout<<"Enter the 2 numbers ";
	 cin>>a>>b;
	 operation q(a,b);
	 q.putdata();
	 break;
       }
case 3:{ float a,b;
	 cout<<"Enter the 2 numbers ";
	 cin>>a>>b;
	 operation r(a,b);
	 r.putdata();
	 break;
       }
default:
{
operation s;
}
}//data a,b;
/*char ch='y';
clrscr();
operation q;
while(ch=='y')
{
cout<<"Enter the 2 numbers ";
cin>>a>>b;
q=operation(a,b);
q.putdata();
*/
cout<<"Do u want to continue \n ";
cin>>ch;
}
getch();
}

