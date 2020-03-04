#include <iostream>
using namespace std;
int main()
{
	int A, B, C, D;
	
	cin>>A;
	C=A%2;
	C=A%3;
	if(A!=3&&A!=2)
	{
		if(C==1&&D>0)
		{
			cout<<A<<"es primo"<<endl;
		}
		else
		{
			cout<<A<<"no es primo"<<endl;
		}
	}
	else
	{
		cout<<A<<"es primo"<<endl;
	}
	return 0;
}
