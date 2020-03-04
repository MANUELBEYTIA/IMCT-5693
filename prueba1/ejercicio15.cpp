#include <iostream>
using namespace std;
int main()
{
	float A, B=0;
	
	cout<<"ingrese datos de entrada del archivo"<<endl;
	cin>>A;
	while(cin)
	{
		if(A>0)
		B=B+A;
		cin>>A;
	}
	cout<<"la suma de positivos es: "<<B<<endl;
	return 0;
}
