//factors of a given number
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"Factors of "<<n<<" are: ";
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		cout<<i<<" ";
		else
		cout<<"\0";
	}
	getch();
	return 0;
}
