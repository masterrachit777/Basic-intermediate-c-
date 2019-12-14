#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x,y;
	int *a=&x,*b=&y;
	cout<<"Enter two numbers: ";
	cin>>x>>y;
	cout<<"Numbers before swapping are: "<<*a<<"\t"<<*b<<endl;
	int *temp=a;
	a=b;
	b=temp;
	cout<<"Numbers after swapping are: "<<*a<<"\t"<<*b;
	getch();
	return 0;
}
