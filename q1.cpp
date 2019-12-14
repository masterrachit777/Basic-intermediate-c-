//sum and product of digits of a number
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,rev,sum=0,prdt=1;
	cout<<"Enter a number: ";
	cin>>n;
	while(n>0)
	{
		rev=n%10;
		sum=sum+rev;
		prdt=prdt*rev;
		n=n/10;
	}
	cout<<"Sum of digits is: "<<sum<<endl;
	cout<<"Product of digits is: "<<prdt;
	getch();
	return 0;
}
