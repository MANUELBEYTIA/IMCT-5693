#include <iostream>
using namespace std;
int main()
{
	int mayor=0;
	int menor=0;
	int esprimero=1;
	int valor=0;
	do{
		cin>>valor;
		if(cin&&valor<0)continue;
		if(cin && esprimero)
		{
			mayor=menor=valor;
			esprimero=0;
		}else{
		if(cin && valor>mayor)
		mayor=valor;
		if(cin && valor<menor)
		menor=valor;
		}
	}
	while(cin);
	cout<<"EL NUMERO MAYOR ES:"<<mayor<<endl;
	cout<<"EL NUMERO MENOR ES:"<<menor<<endl;
	return 0;
}
