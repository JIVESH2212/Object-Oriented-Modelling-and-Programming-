#include<conio.h>
#include<iostream.h>
float princ;
/*int time=2;
float rate=8;
*/
class amt
{
public:
void amount(int time,float princ,float rate)
{
cout<<" FUNCTION 1 IS CALLED \n";
cout<<" Principal amount is "<<princ;
cout<<" \t Time in yrs is "<<time;
cout<<" \t Rate of interest is "<<rate;
cout<<" \n Interest amount is "<<(princ*rate*time)/100<<endl;
}
void amount(char ch,float princ,float time)
{
cout<<" FUNCTION 2 IS CALLED \n";
cout<<" Principal amount is "<<princ;
cout<<" \t Time in yrs is "<<time;
cout<<" \t Rate of interest is 8% ";
cout<<" \n Interest amount is "<<(princ*8*time)/100<<endl;
}
void amount(float princ,float rate)
{
cout<<" FUNCTION 3 IS CALLED \n";
cout<<" Principal amount is "<<princ;
cout<<" \t Time in yrs is 2 ";
cout<<" \t Rate of interest is "<<rate;
cout<<" \n Interest amount is "<<(princ*rate*2)/100<<endl;
}
void amount(int time,float rate)
{
cout<<" FUNCTION 4 IS CALLED \n";
cout<<" Principal amount is : 2000"<<princ;
cout<<" \t Time in yrs is "<<time;
cout<<" \t Rate of interest is "<<rate;
cout<<" \n Interest amount is "<<(2000*rate*time)/100<<endl;
}
void amount(float princ)
{
cout<<" FUNCTION 5 IS CALLED \n";
cout<<" Principal amount is "<<princ;
cout<<" \t Time in yrs is 2 ";
cout<<" \t Rate of interest is 8% ";
cout<<" \n Interest amount is "<<(princ*2*8)/100<<endl;
}
}a;
void main()
{
clrscr();
char b;
cout<<" When principal amount is 2000, time is 2 years and rate is 8% "<<endl;
a.amount(2,2000.0,8.0);
cout<<" When principal amount is 3000, time is 3 years and rate is 8% "<<endl;
a.amount(b,3000.0,3.0);
cout<<" When principal amount is 3000, time is 2 years and rate is 5% "<<endl;
a.amount(3000.0,5.0);
cout<<" When principal amount is 2000, time is 3 years and rate is 8% "<<endl;
a.amount(3,8.0);
cout<<" When principal amount is 5000, time is 2 years and rate is 8% "<<endl;
a.amount(5000.0);
getch();
}

