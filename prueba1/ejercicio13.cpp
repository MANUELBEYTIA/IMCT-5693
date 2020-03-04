#include <iostream>
using namespace std;
int main()
{
	int A, B;
	float C, D=0, E;
	
	cout<<"ingrese numero de alumnos"<<endl;
	cin>>A;
	cout<<"ingrese notas: "<<endl;
	for(B=0;B<=A;B++)
	{
		cin>>E;
		D=D+E;
	}
	C=D/A;
	cout<<"el promedio es: "<<C<<endl;
	return 0;

}
