#include<iostream.h>
#include<conio.h>
#include<math.h>

class vector
{
int x,y,z,tmp;
public:
void cvector()
{
cout<<"Enter the 3 coordinates of the vector : ";
cin>>x>>y>>z;
cout<<"The Vector is "<<" ("<<x<<","<<y<<","<<z<<")"<<endl;
}
void scaling(int scale)
{
int p=x*scale;
int q=y*scale;
int r=z*scale;
cout<<"New vector is "<<" ("<<p<<","<<q<<","<<r<<")"<<endl;
}
int magnitude()
{
tmp=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
return tmp;
}

void add(vector v1,vector v2,vector v3)
{  vector v4;
v4.x=v1.x+v2.x+v3.x;
v4.y=v1.y+v2.y+v3.y;
v4.z=v1.z+v2.z+v3.z;
cout<<"ADDITION of the vectors is "<<v4.x<<" i^ "<<v4.y<<" j^ "<<v4.z<<" k^ ";
}
}v1,v2,v3,v4;
void main()
{

int a,b,c,d;
float m;
clrscr();
//vector v,v1,v2;
v1.cvector();
cout<<"Enter the Scaling value "<<endl;
cin>>d;
v1.scaling(d);
m=v1.magnitude();
cout<<"Magnitude is "<<m<<endl;
v2.cvector();
cout<<"Enter the Scaling value" <<endl;
cin>>d;
v2.scaling(d);
m=v2.magnitude();
cout<<"Magnitude is "<<m<<endl;
v3.cvector();
cout<<"Enter the Scaling value "<<endl;
cin>>d;
v3.scaling(d);
m=v3.magnitude();
cout<<"Magnitude is "<<m<<endl;
v4.add(v1,v2,v3);
getch();

}
