//hhtp://www.hacherrank.com/challenges/classes-objects/problem
#include<stdio.h>
#include<iostream>

using namespace std;

class person
{
	char name[100];
	int roll_no;
	public:
		 virtual void input()
		{
			cout<<"enter the name of student : ";
			cin>>name;
			cout<<"enter the roll number of the student : ";
			cin>>roll_no;

		}
		void setdata()
		{
			cout<<"enter the name of student : "<<name<<endl;
			cout<<"enter the roll number of student : "<<roll_no<<endl;
		}
		virtual int calculate_total_score()=0;
};

class student : public person
{
	int score[5];
	public:
	/*	sum()
		{
			score[5]={45,45,36,24,26};
			cout<<"scores of kristen are "<<score[5]<<endl;
		}*/
		void input();
		int calculate_total_score();
};

void student :: input()
{
	int i;
    int nos;
	cout<<"enter the number of student in Kristen's class : ";
	cin>>nos;
	for(int no=0;no<nos;no++)
	{
	cout<<"enter scores of five exams : ";
		for(i=0;i<5;i++)
		{
			cin>>score[i];
		}
	}

}
int student :: calculate_total_score()
	{
	int sum_of_score=0;
	for(int i=1;i<=5;i++)
	{
		sum_of_score=sum_of_score+score[i];

	}
		cout<<"sum of scores : "<<sum_of_score;
}

int main()
{
    person *ptr=new student;

        ptr->input();
        ptr->calculate_total_score();

	/*int nos;
	cout<<"enter the number of student in Kristen's class : ";
	cin>>nos;
	person *per;
	student s1[nos];
	for(int i=0;i<nos;i++)
    {
        per=&s1[nos];
        per->input();
        per->calculate_total_score();
    }
	//s1.input();
	//s1.sum();
	//s1.calculate_total_score();*/
	return 0;
}
