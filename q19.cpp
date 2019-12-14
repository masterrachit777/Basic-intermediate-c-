//factorial using recurssion and iteration
#include<iostream>
#include<conio.h>
using namespace std;
int fact(int x)
{
	if(x<=1)
	return 1;
	else
	return (x*fact(x-1));
}
int main()
{
	int n,m,i,choice;
	char ch;
	do
	{
		cout<<"Enter your choice: "
		      "\nFactorial using:-"
		      "\n1.Iteration"
		      "\n2.Recurssion\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					cout<<"Enter a number: ";
					cin>>n;
					int fac=1;
					for(int i=n;i>0;i--)
					{
						fac=fac*i;
					}
					cout<<"Factorial of "<<n<<" is: "<<fac<<endl;
				}
				break;
			case 2:
				{
					cout<<"Enter a number: ";
					cin>>m;
					int y=fact(m);
					cout<<"Factorial of "<<m<<" is: "<<y<<endl;
				}
				break;
			default: cout<<"Invalid!!"<<endl;
			break;
		}
		cout<<"Do you want to continue? (y/n) ";
		cin>>ch;
	}
	while(ch=='y'||ch=='Y');
	getch();
	return 0;
	
}
