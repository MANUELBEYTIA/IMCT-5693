#include<iostream>
using namespace std;
int main()
{
	int A, B=0, C=0;
	
	cin>>A;
	while(A>B)
	{
		B=A;
		C=C+B;
		cin>>A;
	}
	cout<<"la suma es:"<<C<<endl;
	return 0;
}
