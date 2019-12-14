//WAP to print pattern 
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of rows: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i+j<=n)
			cout<<" ";
			else
			cout<<"* ";
		}
		cout<<endl;
	}
	getch();
	return 0;
}
