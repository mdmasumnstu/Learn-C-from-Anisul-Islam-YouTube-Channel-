#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"Enter the value: "<<endl;
	
	cin>>a>>b;
	cout<<"The value is:"<<endl;
	cout<<"a: "<<a<<endl<<"b: "<<b<<endl;
	
	temp=a;
	a=b;
	b=temp;
	
	cout<<"The swapping value: "<<endl;
	cout<<"a: "<<a<<endl <<"b: "<<b<<endl;
	
}
