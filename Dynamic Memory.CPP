#include<iostream.h>
#include<conio.h>

void main()
{
    clrscr();
    int *p=NULL;
    int a;
    float b;
    p = new int;
    //if (!p)
      //	cout << "Allocation of memory failed\n";
    while(1)//else
    {
	cout<<" Enter an int value \n"<<endl;
	cin>>a;
	*p = a;
	cout << "Value of p: " << *p << endl;
	break;
    }

    cout<<" Enter a float value \n"<<endl;
    cin>>b;
    float *r = new float(b);

    cout << "Value of r: "<<*r<<endl;

    int n = 5;
    int *q = new int[n];

    //if (!p)
      //	cout << "Allocation of memory failed\n";
  while(1) // else
    {
	for (int i=0;i<n;i++)
	    q[i]=i+1;

	cout << "Value store in block(Array) of memory: ";
	for (i=0;i<n;i++)
	    cout<<endl<<q[i]<<" "<<&q[i]<<endl;
	    break;
    }

    delete p;
    delete r;
    delete[] q;

    getch();
}