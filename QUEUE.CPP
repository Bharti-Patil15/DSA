#include<iostream.h>
#include<conio.h>
#include<process.h>
int m;
class queue
{
	int f,r,q[10],n,i; //char q[10],n for character
	public:
	queue()
	{
		f=r=0;

	}

	void insert();
	void del();
	void dis();

};
void queue::insert()
{
	if(r==m)
	   cout<<"\n Overflow";
	else
	{
	      cout<<"\n Enter an Element in Queue = ";
	      cin>>n;
	      if(f==0)
		 f=1;
		 r++;
		 q[r]=n;

	}
}
void queue::del()
{
	if(f==0)
	{
		cout<<"\nUnderflow";
	}
	else
	{
		int n;
		n=q[f];
		if (f==r)
		  f=r=0;
		else
		  f++;
		   cout<<"\n Deleted element is  "<<n;

	}
}
void queue::dis()
{
	if(f==0)
	   cout<<"\n Underflow";
	else
	{
		cout<<"\n Elements in queue are : ";
		for(i=f;i<=r;i++)
		cout<<q[i]<<"\t";


	}

}
void main()
{
	clrscr();
	queue q;
	int ch;
	cout<<"Enter size of Queue ";
	cin>>m;
	cout<<"\n 1.Insert 2.Display 3.Delete 4.Exit \n";
	while(ch!=4)
	{
		cout<<"\n Enter ch: ";
		cin>>ch;
		switch(ch)
		{
			case 1:q.insert();break;
			case 2:q.dis();break;
			case 3:q.del();break;
			case 4:exit(0);

		}



	}
	getch();


}





