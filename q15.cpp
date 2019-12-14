//program to find sum of elements using malloc/calloc()
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int *ptr,n,i,sum=0;
	cout<<"Enter the number of elements: ";
	cin>>n;
	ptr=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	{
		cin>>ptr[i];
	}
	for(int j=0;j<n;j++)
	{
		sum=sum+*ptr;
		ptr++;
	}
	cout<<"Sum of elements is: "<<sum<<endl;
	free(ptr);
	getch();
	return 0;
}
