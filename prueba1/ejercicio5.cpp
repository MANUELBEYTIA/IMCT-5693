#include <iostream>
using namespace std;
int main()
{
	float A, B, C, D, E;
	unsigned int F;
	
	cin>>A<<F;
	B=A*F;
	cout<<"total:"<<B<<endl;
	C=B*0.15;
	cout<<"iva:"<<C<<endl;
	D=B+C;
	cout<<"total iva:"<<D<<endl;
	if(D>50000)
	{
		E=D*0.5;
		cout<<"total con descuento: "<<D-E<<endl;
	}
	else
	{
		cout<<"sin descuento"<<endl;
	}
	return 0;
}
