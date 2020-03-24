#include <iostream>
using namespace std;
int main()
{
	int s;
	int h=0, m=0, sm=0; 
	int t=0;
cin>>s;

h=s/3600;
t=s%3600;

m=t/60;
sm=t%60;

cout<<h;
if(m<10)
	cout<<"0";
	cout<<m;
if(sm<10)
	cout<<"0";
	cout<<sm;

return 0;
}
