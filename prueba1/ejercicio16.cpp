#include <iostream>
using namespace std;
int main()
{
	int A, B=0, c=0, D=0, E;
	
	cout<<"ingresar numeros"<<endl;
	for(A=1;A<=100;A++)
	{	
		cin>>E;
		if(E<15)
		B+=+1;
		if(E>50)
		c+=+1;
		if(E>25&&E<45)
		D+=+1;
	}
	cout<<B<<" numeros menores a 15 detectados"<<endl;
	cout<<c<<" numeros mayores a 50 detectados"<<endl;
	cout<<D<<" numeros entre 25 y 45 detectados"<<endl;
	return 0;
}
