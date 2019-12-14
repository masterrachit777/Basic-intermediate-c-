#include<iostream>
#include<conio.h>
using namespace std;
int gcd(int a,int b)
{
	while(a!=b)
	{
		if(a>b)
		return gcd(a-b,b);
		else
		return gcd(a,b-a);
	}
	return a;
}
int main()
{
	int n1,n2,n3,n4,choice;
	char ch;
	do
    {
    	cout<<"Enter you choice: "
    	      "\nGCD using:-"
    	      "\n1.Iteration"
    	      "\n2.Recurssion\n";
    	cin>>choice;
    	switch(choice)
    	{
    		case 1:
    			{
    				cout<<"Enter two no's: ";
    				cin>>n1>>n2;
    				while(n1!=n2)
    				{
    					if(n1>n2)
    					n1=n1-n2;
    					else
    					n2=n2-n1;
					}
					cout<<"HCF of n1 and n2 is: "<<n1<<endl;
				}
				break;
			case 2:
				{
					cout<<"Enter two numbers: ";
					cin>>n3>>n4;
					cout<<"GCD is: "<<gcd(n3,n4)<<endl;
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
