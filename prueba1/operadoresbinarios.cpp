#include <iostream>
#define BIT1 1
#define BIT2 2
#define BIT3 4
#define BIT4 8

using namespace std;


int main()
{
	int dato = BIT1|BIT3;
	int mask = 1;
	int res = dato & 1;

	if(dato & mask==0)
		cout<<"par"<<endl;
	else
		cout<<"impar"<<endl;
	return 0;
}
