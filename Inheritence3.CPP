#include<conio.h>
#include<iostream.h>
#include<stdio.h>
class school
{
  char name[10];
  int age;
  public:
  school()
  {
  name[10]=NULL;
  age=0;
  }
  void input()
  {
   cout<<" Enter the Name "<<endl;
   gets(name);
   cout<<" Enter age "<<endl;
   cin>>age;
   }
   void output()
   {
   cout<<" Name is "<<name<<endl;
   cout<<" The age is "<<age<<endl;
   }
};
class student:public school
{  int rollno;
   int standard;
   int marks;
   public:
   student()
   {
   rollno=0;
   standard=0;
   marks=0;
   }

   void get()
   {
   cout<<" Enter the Roll No. of the Student  "<<endl;
   cin>>rollno;
   cout<<" Enter the class of the Student "<<endl;
   cin>>standard;
   cout<<"Enter the Average Marks of the Student "<<endl;
   cin>>marks;
   }
   void put()
   {
   cout<<" The Roll No. of the student is "<<rollno<<endl;
   cout<<" The class of the student is "<<standard<<endl;
   cout<<" The Average Marks of the student is "<<marks<<endl;
   }

}s1,s2,s3;
class teacher:public school
{  int classteacherof;
   double salary;
   public:
   teacher()
   {
   classteacherof=0;
   salary=0;
   }

   void getdata()
   {
   cout<<" Class teacher of "<<endl;
   cin>>classteacherof;
   }
   double compute()
  { if(classteacherof>1&&classteacherof<5)
     salary=15000;
    else if(classteacherof>=5&&classteacherof<=10)
       salary=20000;
    else if(classteacherof==11||classteacherof==12)
       salary=25000;
    else
      salary=0;
    return salary;
   }
   void putdata()
   { double sal=compute();


     cout<<"Teacher is  Class teacher of "<<classteacherof<<endl;
     cout<<" Teacher has salary Per Month = "<<sal<<endl;
     }
}t1,t2,t3;
void main()
{
clrscr();
int ch;
char ch1='y';
cout<<" Enter the School data "<<endl;
cout<<" Press 1 to Enter Student Data "<<endl;
cout<<" Press 2 to Enter Teacher Data "<<endl;
cin>>ch;
if(ch==1)
{ while(ch1=='y')
{
cout<<" Enter  Student Data"<<endl;
s1.input();
s1.get();
s1.output();
s1.put();
cout<<" Do u want to Continue Y/N  "<<endl;
cin>>ch1;
}
/*s2.input();
s2.get();
s3.input();
s3.get();
s1.output();
s1.put();
s2.output();
s2.put();
s3.output();
s3.put();
*/
}
if(ch==2)
{
while(ch1=='y')
{
cout<<" Enter  Teacher Data "<<endl;
t1.input();
t1.getdata();
t1.output();
t1.putdata();
cout<<" Do u want to Continue Y/N  "<<endl;
cin>>ch1;
}
/*t2.input();
t2.getdata();
t3.input();
t3.getdata();
t1.output();
t1.putdata();
t2.output();
t2.putdata();
t3.output();
t3.putdata();
*/
}
getch();
}
