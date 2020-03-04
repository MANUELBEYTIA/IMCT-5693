#include <iostream>
using namespace std;
int main()
{
	int A, B, C=0;
	
	cout<<"ingrese numeros: "<<endl;
	for(B=1;B<=10;B++)
	{
		cin>>A;
		if(A>0)
		{
			C+=+1;
		}
	}
	cout<<"numeros positivos encontrados: "<<C<<endl;
	return 0;
}
