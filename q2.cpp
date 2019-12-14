//reverse of a number
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,rev,sum=0;
	cout<<"Enter a number: ";
	cin>>n;
	while(n>0)
	{
		rev=n%10;
		sum=(sum*10)+rev;
		n=n/10;
	}
	cout<<"Reverse of the number is: "<<sum;
	getch();
	return 0;
}
