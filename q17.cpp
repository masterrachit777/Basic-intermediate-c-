//merging two sorted arrays
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int q[100],p[100],r[200],a,b;
	cout<<"Enter size of array1: ";
	cin>>a;
	cout<<"Enter size of array2: ";
	cin>>b;
	cout<<"Enter elements of array1: ";
	for(int i=0;i<a;i++)
	{
		cin>>p[i];
	}
	cout<<"Enter elements of array2: ";
	for(int i=0;i<b;i++)
	{
		cin>>q[i];
	}
	int l=a+b;
	for(int x=0,y=0,d=0;l>0;)
	{
		if(p[x]=='\0')
		{
			r[d]=q[y];
			y++;
		}
		else if(q[y]=='\0')
		{
			r[d]=p[x];
			x++;
		}
		else if(p[x]<=q[y])
		{
			r[d]=p[x];
			x++;
		}
		else
		{
			r[d]=q[y];
			y++;
		}
		d++;
		l--;
	}
	cout<<"Result: ";
	for(int m=0;m<(a+b);m++)
	{
		cout<<r[m]<<" ";
	}
	getch();
	return 0;
}
