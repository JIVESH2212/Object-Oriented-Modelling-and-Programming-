#include<iostream.h>
#include<conio.h>
#include<math.h>

class IC
{
int NoOfIC;
float length,width;
public:

IC(int x,float y,float z)
{
      NoOfIC=x;
      length=y;
      width=z;

 }
 IC(int x)
 {
   // cout<<"Enter the IC NO. :  ";
   // cin>>x;
    NoOfIC=x;
    length=1;
    width=1;
  }
/* IC()
 { length=1;
   width=1;
  }
  ~IC(){ }
  */

 float perimeter()

 { return 2*(length + width); }

 float area()

 { return (length*width);}

 void show()
 {
   cout<<"No. Of IC  =   "<<NoOfIC<<endl;
   cout<<"LENGTH Of IC=   "<<length<<endl;
   cout<<"WIDTH Of IC=   "<<width<<endl;
   cout<<"perimeter Of IC=   "<<perimeter()<<endl;
   cout<<"AREA =   "<<area()<<endl;
   }
/*   IC(int x)
 {
   // cout<<"Enter the IC NO. :  ";
   // cin>>x;
    NoOfIC=x;
    length=1;
    width=1;
  } */
    ~IC(){ }
  /* int samearea(IC IC1,IC IC2,IC IC3)
   { if(IC1.area()==IC2.area()&&IC2.area()==IC3.area())
	return 1;
     else
	return 0;
	}
 */  };

   void main()
   {  clrscr();
   int c,x,y,z;
   char ch='y';
   cout<<"Do u want to enter new values or choose default values. "<<endl;
   while(ch=='y')
   {
   cout<<"Press 1 to enter new values : "<<endl;
   cout<<"press 2 for choosing default values : "<<endl;
   cin>>c;
   if(c==1)
   {
      cout<<"Enter the IC NO. :  ";
      cin>>x;

      cout<<"Enter the length of 1st IC  ";
      cin>>y;

      cout<<"Enter the width of 1st IC   ";
      cin>>z;
      IC IC1(x,y,z);
     // IC1.IC(x,y,z);
     IC1.show();
   }
   else if (c==2)
   { cout<<"Enter the IC NO. :  ";
	 cin>>x;
	 IC IC2(x);
	 // IC2.IC(x);
	 IC2.show();
   }
     else
       cout<<"Wrong choice. Enter again.  "<<endl;
       cout<<"Do u want to continue (y/n)  "<<endl;
       cin>>ch;
  } /* int x,y,z;
      cout<<"Enter the IC NO. :  ";
      cin>>x;
      cout<<"Enter the length of 1st IC  ";
      cin>>y;
      cout<<"Enter the width of 1st IC   ";
      cin>>z;
      IC1.IC(x,y,z);*/
     // IC1.show();
     // cout<<endl;
     /* cout<<"Enter next IC NO. :  ";
      cin>>x;
      cout<<"Enter the length of the 2nd IC   ";
      cin>>y;
      cout<<"Enter the width of the 2nd IC   ";
      cin>>z;
      IC2.IC(x,y,z);*/
      //IC2.show();
     // cout<<endl;
     /* cout<<"Enter the next IC NO. :  ";
      cin>>x;
      cout<<"Enter the length of the 3rd IC   ";
      cin>>y;
      cout<<"Enter the width of the 3rd IC  ";
      cin>>z;
      IC3.IC(x,y,z); */
     // IC3.show();
     // cout<<endl;

   /*   if(check.samearea(IC1,IC2,IC3)==1)
	  cout<<"All IC Have Same area";
      else
	  cout<<"All IC have different area";
     */
      getch();
	}