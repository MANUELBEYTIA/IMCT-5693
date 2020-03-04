#include <iostream>
using namespace std;
int main()
{
	unsigned int A, B, C;
	
	for(A=1;A<=200;A++)
	{
		if(A%2==0)
		{
			B=B+A;
		}
		else
		{
			C=C+A;
		}
	}
	cout<<"suna de impares es:"<<C<<endl;
	cout<<"suma de pares es:"<<B<<endl;
	return 0;
}
