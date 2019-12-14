//whether a number is prime or number
#include<iostream>
#include<conio.h>
using namespace std;
void prime(int a)
{
	int count=0;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
		count++;
	}
	if(count<=2)
	cout<<"It is a prime number"<<endl;
	else
	cout<<"Not a prime number"<<endl;
	cout<<"Prime numbers between 1-100 are: "<<endl;
	for(int j=1;j<=100;j++)
	{
		int c=0;
		for(int k=1;k<=j;k++)
		{
			if(j%k==0)
			c++;
		}
		if(c<=2)
		cout<<j<<" ";
		else
		cout<<"\0";
	}
}
int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	prime(n);
	getch();
	return 0;
}
