#include<iostream.h>
#include<conio.h>
#include<math.h>

class IC
{
int NoOfIC;
float length,width;
public:

void set(int x,float y,float z)
{
 NoOfIC=x;
 length=y;
 width=z;
 }
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
   int samearea(IC IC1,IC IC2,IC IC3)
   { if(IC1.area()==IC2.area()&&IC2.area()==IC3.area())
	return 1;
     else
	return 0;
	}
   }IC1,IC2,IC3,check;

   void main()
   {  clrscr();
      int x,y,z;
      cout<<"Enter the IC NO. :  ";
      cin>>x;
      cout<<"Enter the length of 1st IC  ";
      cin>>y;
      cout<<"Enter the width of 2nd IC   ";
      cin>>z;
      IC1.set(x,y,z);
      IC1.show();
      cout<<endl;
      cout<<"Enter next IC NO. :  ";
      cin>>x;
      cout<<"Enter the length of the 2nd IC   ";
      cin>>y;
      cout<<"Enter the width of the 2nd IC   ";
      cin>>z;
      IC2.set(x,y,z);
      IC2.show();
      cout<<endl;
      cout<<"Enter the next IC NO. :  ";
      cin>>x;
      cout<<"Enter the length of the 3rd IC   ";
      cin>>y;
      cout<<"Enter the width of the 3rd IC  ";
      cin>>z;
      IC3.set(x,y,z);
      IC3.show();
      cout<<endl;

      if(check.samearea(IC1,IC2,IC3)==1)
	  cout<<"All IC Have Same area";
      else
	  cout<<"All IC have different area";

      getch();
	}