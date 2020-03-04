#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
	int x, litros, c, t=0, v;
	int lim_inf=50;
	int lim_sup=150;

	cout<<"VELOCIDAD  "<<"LITROS  "<<"PRECIO  "<<endl;
	srand(time(NULL));
	for(x=0;x<2000;x++)
	{
		v=lim_inf+rand()%(lim_sup+1-lim_inf);
		if(v>100)
		litros=12;
		else
		litros=10;
		c=litros*19;
		t=t+c;
cout<<v<<".........."<<litros<<"....."<<c<<endl;
	}
cout<<"PRECIO,COMBUSTIBLE TOTAL:"<<t<<endl;
return 0;
}
