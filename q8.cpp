//macro to swap two numbers
#include<iostream>
#include<conio.h>
#define swap(x,y) int temp; temp=x; x=y; y=temp;
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the two numbers: ";
	cin>>a>>b;
	cout<<"Numbers before swapping are: "<<a<<"\t"<<b<<endl;
	swap(a,b);
	cout<<"Numbers after swapping are: "<<a<<"\t"<<b<<endl;
	getch();
	return 0;
}
