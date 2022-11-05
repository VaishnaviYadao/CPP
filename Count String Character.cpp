#include<iostream>

#include<stdio.h>
using namespace std;

int main()
{
	char str[100];
	int i , totchar;
	totchar=0;
	cout<<"Please enter the string: \n";
	gets(str);
	for(i=0; str[i] != '\0'; i++)
	{
		if(str[i]!=' ')
		{
			totchar++;
		}
	}
	cout<<"The total character of given string=" <<totchar;
	
	return 0;
}
