#include <iostream>
using namespace std;
int main()
{
	int x;
	long y, r=0;
	cin>>x;
	cin>>y;
	if(x>=1&&y<=1000000000)
	{
		r=(x+y)+(x*y)+(y+x)+(y*x);
		cout<<r<<endl;
	}
	return 0;
}
