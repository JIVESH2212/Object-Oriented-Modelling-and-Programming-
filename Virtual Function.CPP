//hhtp://www.hacherrank.com/challenges/virtual-function/problem
#include<stdio.h>
#include<iostream.h>
#include<conio.h>
class person
{
	public:
	char name[100];
	int age;
       //	static int count;
	public:
	virtual void getdata(){
		cout<<"Enter the name : "<<endl;
		cin>>name;
		cout<<"Enter the age : "<<endl;
		cin>>age;
	}
	virtual void putdata()
	{
		cout<<" Name  : "<<name<<endl;
		cout<<" Age  : "<<age<<endl;
	}
       /*	person()
	{
		count++;
	}
	void showcount()
	{
		cout<<" No. of objects created : "<<count<<endl;
	}
	 */
};


class professor:public person
{
	int publication;
	int cur_id;
	public:
		void getdata()
		{
			cout<<" Enter the name of pofessor : "<<endl;
			cin>>name;
			cout<<" Enter the age of pofessor : "<<endl;
			cin>>age;
			if(age>=80)
			{
				cout<<"sorry,but you are overage\n";

			}
			cout<<"Enter the publications of professor : "<<endl;
			cin>>publication;
			if(publication<=0 && publication>=1000)
			{
				cout<<"sorry,but invalid numbers of publication\n"<<endl;

			}
		 cout<<" Enter the Id no. "<<endl;
		 cin>>cur_id;
		}
		void putdata()
		{
			cout<<" name of pofessor : "<<name<<endl;
			cout<<" age of pofessor : "<<age<<endl;
			cout<<" publications of professor : "<<publication<<endl;
			cout<<" current id of professor : "<<cur_id<<endl;
		}
};

class student:public person
{
	int marks;
	int cur_id;
	int i;
	public:
		void getdata()
		{
			cout<<"enter the name of student : \n";
			cin>>name;
			cout<<"enter the age of student : \n";
			cin>>age;
			if(age>=80)
			{
				cout<<"invalid age\n";

			}
			cout<<"enter the avg marks of student: \n";
		       /*	for( i=1;i<=6;i++)
			{
				cin>>marks[i];
			}
			if(marks[i]<=0 &&marks[i]>=100)
			{
				cout<<"marks should be between 1 to 100\n";

			}*/
			cin>>marks;
		}
		void putdata()
		{
			cout<<" name of student : "<<name<<endl;
			cout<<" age of student : "<<age<<endl;
			cout<<"sum of marks : "<<marks<<endl;
		       //	sum(marks);
			//cout<<" \ncurrent id of student : "<<cur_id<<endl;
		}
	       /*	int sum(int marks[6])
		{
			int sum=0;
			for(int i=1;i<=6;i++)
			{
				sum=sum+marks[i];
		    }
		    cout<<"sum of marks : \n"<<sum;
		}*/
};

void main()
{       clrscr();
	person ptr;
	int num;
	student std;
	professor prof;
	char ch='y';



	while(ch=='y')
	{
		cout<<"1. object of professor is created.\n2. object of student is created.\nEnter 1 or 2 : \n";
		cin>>num;
	if(num==1)
	{

		prof.getdata();
		prof.putdata();
		cout<<" Do u want to continue y/n "<<endl;
		cin>>ch;

	}
	else if(num==2)
	{

		std.getdata();
		std.putdata();
		cout<<" Do u want to continue y/n "<<endl;
		cin>>ch;

	}
}
//ptr.showcount();
getch();
}



