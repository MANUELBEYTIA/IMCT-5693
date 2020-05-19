#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
	int a=0, b=0, v;
	int lim_inf=0;
	int lim_sup=100;
	
	srand(time(NULL));
	for(int i=0;i<1000;i++)
	{
		v=lim_inf+rand()%(lim_sup+1-lim_inf);
		if(v<=30)
		{
			a=a+1;
			cout<<"G TORTUGA"<<endl;
		}
		else
		{
			b=b+1;
			cout<<"G LIEBRE"<<endl;
		}
	}
	return 0;
}
