#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
float marks()
{ int a,b,c;
  float avg;
cout<<" Marks obtained in english "<<endl;
cin>>a;
cout<<" Marks obtained in Maths "<<endl;
cin>>b;
cout<<" Marks obtained in science "<<endl;
cin>>c;
avg=(a+b+c)/3;
return avg;
}
class Person
{
char name[10];
int age;
public:
void GetDetails()
{
cout<<" Enter the name of the student : "<<endl;
gets(name);
cout<<" Enter the age of the student : "<<endl;
cin>>age;
}
/*char name()
{ return name
} */
void PutDetails()
{
cout<<" Th Name of the student is "<<name<<endl;
cout<<" The Age of the student is "<<age<<endl;
}
/*int age()
{
return age;
} */
};
class Student:public Person
{
float RollNo;
float AvgMarks;
public:
int ch;
Student()
{
AvgMarks=0;
ch=0;
}
void input()
{

cout<<" Enter the Roll No. of the student "<<endl;
cin>>RollNo;
cout<<" 0 ->Enter the Average marks of the student "<<endl;
cout<<" 1 -> To calculate the average marks "<<endl;
cin>>ch;
if(ch==0)
cin>>AvgMarks;
else
AvgMarks=marks();
}
/*int RollNo()
{
return RollNo;
}
float AvgMarks()
{
return AvgMarks;
}*/
void output()
{
cout<<" The RollNo. of the student is "<<RollNo<<endl;
cout<<" The Average Marks of the student is "<<AvgMarks<<endl;
}
};
class Graduate:public Student
{
char subject[25];
char employed;
public:
void Getinput()
{
if(ch==0)
{
cout<<" Enter the subject name "<<endl;
gets(subject);
}
cout<<" Employed or not y/n "<<endl;
cin>>employed;
}
/*char subject()
{
return subject[25];
}
char employed()
{
return employed;
} */
void putoutput()
{
cout<<" The subject name is "<<subject<<endl;
cout<<" working? "<<employed<<endl;
}
};
void main()
{
clrscr();
char ch='y';
while(ch=='y')
{
Graduate a;
a.GetDetails();
a.input();
a.Getinput();
a.PutDetails();
a.output();
a.putoutput();
cout<<" Do u want to continue Y/N  "<<endl;
cin>>ch;
}
getch();
}