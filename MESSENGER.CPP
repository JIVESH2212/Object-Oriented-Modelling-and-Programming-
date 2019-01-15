#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
//#define n 0


/*class message
{
int ID;
char name,SendMessage[5],ReceiveMessage[5];
public:
void set(int n,char m,char SM[5])
{ ID=n;
  name=m;
  strcpy(SendMessage,SM);
  strcpy(ReceiveMessage,SM);

  }
 /* void msgcopy(char SM[20])
  {message M1;
   strcpy(SM,M1.SendMessage);
  }
  void copy(message M1,message M2)
  {
  strcpy(M2.ReceiveMessage,M1.SendMessage);
  cout<<"Received message is"<<M2.ReceiveMessage;
  }*/
/*  void show(char SM[5])
  { strcpy(SendMessage,SM);
    strcpy(ReceiveMessage,SM);
   cout<<"\nSending Message is   "<<SendMessage;
   cout<<"\nReceived Message is   "<<ReceiveMessage<<endl;
}
char nam(){ return name; }
int I(){ return ID; }
}M[3];
  void main()
  {
    clrscr();

    int x;
    char y;
    char SM[5];
   for(int i=1;i<=3;i++)
    {
      cout<<"\nEnter the id and name for node  "<<i<<"   ";
      cin>>x>>y;
    cout<<"\nEnter the sending message    \n";
   // for(int j=0;j<5;j++)
     // cin>>SM[5];
     gets(SM);
     M[i].set(x,y,SM);
     M[i].show(SM);
      // M[i].set(x,y);

   // for(int i=0;i<10;i++)
   // cin>>y;
   }

     cout<<"Node details are  \n";
     for(i=1;i<=3;i++)
     {  cout<<"Node name  "<<M[i].nam()<<"  ID is  "<<M[i].I()<<endl;
    //M1.msgcopy(SM);
   // copy.copy(M1.SendMessage,M2.ReceiveMessage);
   } getch();
    }
  */

  class messenger
{
 int ID;
 char name;
 public:
 void set(int x,char y)
 { ID=x;
   name=y;
  }
 int IDn()
 {  return ID;
 }
 char nam()
 {  return name;
 }
  };

  void main()
  { clrscr();

    int x,a,b,j,n,i,count=0;
    char y,SM[5];
    char ch='y';
    cout<<"ENTER THE NO. OF NODES U WANT TO CREATE :  ";
    cin>>n;
    //n=min(num,k);
    n=n+1;
   messenger *M=new messenger[n];
    for(i=1;i<=n;i++)
     {
	cout<<"Enter the Name And ID of Node  "<<i<<"  ";
	cin>>y;
	cin>>x;
	M[i].set(x,y);
      }
  for(i=1;i<=n;i++)
  {  cout<<"Node Name is "<<M[i].nam()<<" ID is "<<M[i].IDn()<<endl;
   }
  while(ch=='y')
   {  cout<<"Enter the Source and Destination Id No.  ";
      cin>>a>>b;
      int flag1=0,flag2=0;
	 for(i=1;i<=n;i++)
	 {
		if(M[i].IDn()==a) flag1=1;
		if(M[i].IDn()==b) flag2=1;
	 }
	 if(flag1==0||flag2==0)
	  { cout<<"\nNode not present between Source and Destination";
	    cout<<flag1<<flag2;
       //	 if(M[i].IDn()!=a||M[j].IDn()!=b)
	// cout<<"\nNode not present between Source and Destination";

	}
/*	 for(i=1,j=1;i<6,j<=6;i++,j++)

    if(M[i].IDn()!=a&&M[j].IDn()!=b)
      { cout<<"\nNode not present between Source and Destination";
	 break;
	}  */
	else
{
cout<<"Enter the Sending Message between source ID "<<a<<"  & Destination ID  "<<b<<" "<<endl;
	gets(SM);
cout<<"Sending message   "<<SM<<" to Destination Node ID  "<<b<<endl;
cout<<"Receiving message   "<<SM<<" from Source Node ID  "<<a;
//count++;
//cout<<"No. of nodes is  "<<count;
}
cout<<"\nDo you Want to Continue (y/n)";
cin>>ch;
}

getch();
}