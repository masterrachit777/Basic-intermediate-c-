//to print the sum of series: 1 + 1/2 + 1/3 + 1/4 +....
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float sum=0.0;
	int n;
	cout<<"Enter the number of terms: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		sum=sum+(1.0/i);
	}
	cout<<"The sum of series is: "<<sum;
	getch();
	return 0;
}
