#include<iostream>
using namespace std;

int main()
{
   int i=1, n;
cout<<"Enter a no of which you want table:\n";
cin>>n;
cout<<"Table of "<<n<<" is :: \n";
for(i=1;i<=10;i++){
	cout<<i*n<<'\n';
}
return 0;

}
