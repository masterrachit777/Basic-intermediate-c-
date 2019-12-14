#include<iostream>
#include<conio.h>
using namespace std;
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
	cout<<"Numbers are: "<<*x<<"\t"<<*y<<endl;
}
int main()
{
	int a,b;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	cout<<"Numbers before swapping are: "<<a<<"\t"<<b<<endl;
	swap(&a,&b);
	cout<<"Numbers after swapping are: "<<a<<"\t"<<b<<endl;
	getch();
	return 0;
}
