#include<iostream>
#include<conio.h>
using namespace std;
float area(int a)
{
	return (3.14*a*a);
}
float circum(int a)
{
	return (2*a*3.14);
}
int main()
{
	int r;
	cout<<"Enter the radius of the circle: ";
	cin>>r;
	float y=area(r);
	cout<<"Area of circle is: "<<y<<endl;
	float x=circum(r);
	cout<<"Circumference of circle is: "<<x<<endl;
	getch();
	return 0;
}

