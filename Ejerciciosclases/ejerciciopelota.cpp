#include <iostream>
using namespace std;
int main()
{
	int i, x=0, y=0, z=0;
	char n;
	
	for(i=1;i<13;i++)
	{
	cin>>n;		
	if(n=='A')
	{
		if(x==0)
		{
			cout<<"a";
			x=1;
		}
		else
		{
			cout<<"a";
			x=0;
			z=1;
		}
	}
	else if(n=='B')
	{
		if(y==0)
		{
			cout<<"a";
			y=1;
			z=1;
		}
		else
		{
			cout<<"b";
			y=0;
		}
	}
	else
	{
		cout<<"error";
	}

	}
	return 0;
}
