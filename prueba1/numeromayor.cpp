#include <iostream>
using namespace std;
int main()
{
	int mayor=-1;
	int valor=0;
	cin>>valor;
	while(cin)
	{
		if(valor>mayor)
		mayor=valor;
		cin>>valor;
	}
	cout<<"EL NUMERO MAYOR ES:"<<mayor<<endl;
	return 0;
}
