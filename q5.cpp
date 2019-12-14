#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
void palindrome(char a[])
{
	int i=0;
	int l=strlen(a);
	int j=strlen(a)-1;
	int count=1;
	while(j>i)
	{
	    if(a[i++]==a[j--])
	    ++count;
	    else
	    break;
    }
    if(count>l/2)
    cout<<"It is a palindrome"<<endl;
    else
    cout<<"It is not a palindrome";
}
int main()
{
	char s1[100];
	cout<<"Enter the string: ";
	cin.getline(s1,sizeof(s1));
 	palindrome(s1);
	getch();
	return 0;
}
