#include <iostream>
using namespace std;
int main()
{
	double A, B=0;

	for(A=1;A<=100;A++)
	{
		B=B+A*A;
	}
	cout<<"la suma de los cuadrados es:"<<B<<endl;
	return 0;
}
