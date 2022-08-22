#include<iostream>
using namespace std;

#define MAX_LENGTH 100
int main()
{
	char name[MAX_LENGTH]={0};
	int age;
	cout<<"Enter your Name";
	cin.getline(name,MAX_LENGTH);
	cout<<"Enter Age";
	cin>>age;
	cout<<"Name:" <<name<<endl;
	cout<<"age:"<<endl;
	return 0;
}
