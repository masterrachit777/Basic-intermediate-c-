//Fibonacci using recurssion and iteration
#include<iostream>
#include<conio.h>
using namespace std;
int fib(int x)
{
	if(x==0 || x==1)
	return x;
	else
	return (fib(x-1)+fib(x-2));
}
int main()
{
	int a=0,b=1,c;
	int choice;
	char ch;
	do
	{
	cout<<"Enter your choice: "
	      "\nFibonacci series using:-"
	      "\n1.Iteration"
	      "\n2.Recurssion\n";
	cin>>choice;
	switch(choice)
	{
		case 1:
			{
				int n;
				cout<<"Enter the number of terms: ";
				cin>>n;
				cout<<a<<" "<<b<<" ";
				for(int i=1;i<=(n-2);i++)
				{
					c=a+b;
					cout<<c<<" ";
					a=b;
					b=c;
				}
				cout<<endl;
			}
			break;
		case 2:
			{
				int m;
				cout<<"Enter the number of terms: ";
				cin>>m;
				int j=0;
				while(j<m)
				{
					cout<<fib(j)<<" ";
					j++;
				}
				cout<<endl;
			}
			break;
		default: cout<<"Invalid!!";
		break;
	}
	cout<<"Do you want to continue? (y/n) ";
	cin>>ch;
    }
    while(ch=='y' || ch=='Y');
	getch();
	return 0;
}
