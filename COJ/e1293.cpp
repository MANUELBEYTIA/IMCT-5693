#include<iostream>
using namespace std;
int main()
{
	double a, r=1, i;
	cin>>a;
	if(a>=0&&a<=265)
	{
		for(i=0;i<a;i++)
		r=r*2;
		cout<<r<<endl;
		return 0;
	}
	else
	{
		return 1;
	}
}
