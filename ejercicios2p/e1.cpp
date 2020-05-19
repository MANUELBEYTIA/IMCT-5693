#include<iostream>
using namespace std;
int par(int a)
{
	int r=a/2;
	return r;
}
int impar(int a)
{
	int r=(a*3)+1;
	return r;
}

int deci(int a)
{
	if(a%2==0)
	{
		a=par(a);
		cout<<a<<" ";
	}
	else
	{
		a=impar(a);
		cout<<a<<" ";
	}
	return a;
}

int main()
{
	int a;
	cin>>a;
	if(a>=1&&a<=106)
	{
		cout<<a<<" ";
		while(a!=1)
		a=deci(a);
	}
	else
	return 0;
}
