//sum of series: 1-2+3-4+5.......
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"Enter the number the terms: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		sum=sum-i;
		else
		sum=sum+i;
	}
	cout<<"Sum of the given series is: "<<sum;
	getch();
	return 0;
}
