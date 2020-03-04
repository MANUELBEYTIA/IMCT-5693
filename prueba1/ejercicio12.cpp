#include <iostream>
using namespace std;
int main()
{
	int A, B, C=0, D=0; 
	float  E=0, F=0;
	float G;
	
	cout<<"introduzca numeros"<<endl;
	for(A=1;A<=10;A++)
	{
		cin>>B;
		if(B%2==0)
		{
			E=E+B;
			C+=+1;
		}
		else
		{
			F=F+B;
			D+=+1;
		}
	}
	G=F/D;
	cout<<"num pares encontrados; "<<C<<endl;
	cout<<"suma de pares: "<<E<<endl;
	cout<<"media de impares: "<<G<<endl;
	return 0;
}
