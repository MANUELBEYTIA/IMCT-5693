#include<iostream>
using namespace std;
int ope(int x,int y)
{
	long a,b,c,d,e;
	a=x+y;
	b=x-y;
	c=x*y;
	d=x/y;
	e=x%y;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<e<<endl;
	cout<<d<<endl;
	return 0;
}
int main()
{
	int x, y;
	cin>>x;
	cin>>y;
	if(x>=1&&y<=50)
	ope(x,y);
	return 0;
}
