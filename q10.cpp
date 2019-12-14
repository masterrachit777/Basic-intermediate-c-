//menu driven array
#include<iostream>
#include<conio.h>
using namespace std;
void even(int ar[],int x)
{
	cout<<"Even valued elemnts are: ";
	for(int i=0;i<x;i++)
	{
		if(ar[i]%2==0)
		cout<<ar[i]<<" ";
		else 
		cout<<"\0";
	}
	cout<<endl;
}
void odd(int ar[],int x)
{
	cout<<"Odd valued elements are: ";
	for(int i=0;i<x;i++)
	{
		if(ar[i]%2!=0)
		cout<<ar[i]<<" ";
		else
		cout<<"\0";
	}
	cout<<endl;
}
void sum_avg(int ar[],int x)
{
	float sum=0.0;
	for(int i=0;i<x;i++)
	{
		sum=sum+ar[i];
	}
	cout<<"Sum of elements is: "<<sum<<endl;
	float avg=sum/x;
	cout<<"Average of elements is: "<<avg<<endl;
}
void max_min(int ar[],int x)
{
	int max=ar[0];
	for(int i=1;i<x;i++)
	{
		if(max<ar[i])
		max=ar[i];
	}
	cout<<"Maximum element of array is: "<<max<<endl;
	int min=ar[0];
	for(int i=1;i<x;i++)
	{
		if(min>ar[i])
		min=ar[i];
	}
	cout<<"Minimum element of array is: "<<min<<endl;
}
void duplicate(int ar[],int x)
{
	for(int i=0;i<x;i++)
	{
		for(int j=i+1;j<x;j++)
		{
			if(ar[j]==ar[i])
			{
				for(int k=j+1;k<x;k++)
				{
				    ar[k-1]=ar[k];
			    }
			    j--;
			    x--;
			}
		}
	}
	for(int i=0;i<x;i++)
	{
		cout<<ar[i]<<" ";
	}
	cout<<endl;
}
void reverse(int ar[],int x)
{
	cout<<"Reverse of array is: ";
	for(int i=x-1;i>=0;i--)
	{
		cout<<ar[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int a[100],n;
	cout<<"Enter the number of elements: ";
	cin>>n;
	cout<<"Enter the array elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	char ch;
	do
	{
		int choice;
		cout<<"Enter your choice:\n\t1.Even-valued elements\n\t2.Odd-valued elements\n\t3.Sum and average of elements\n\t4.Maximum and minimum element\n\t5.Remove duplicate elements from array\n\t6.Reverse of an array\n\t";
		cin>>choice;
		switch(choice)
		{
			case 1: even(a,n);
			break;
			case 2: odd(a,n);
			break;
			case 3: sum_avg(a,n);
			break;
			case 4: max_min(a,n);
			break;
			case 5: duplicate(a,n);
			break;
			case 6: reverse(a,n);
			break;
			default: cout<<"Invalid choice!"<<endl;
			break;		
		}
		cout<<"Do you want to continue? (Y/N) ";
		cin>>ch;
	}
	while(ch=='y' || ch=='Y');
	getch();
	return 0;
}
