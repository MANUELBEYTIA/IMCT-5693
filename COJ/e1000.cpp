#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a;
    cin>>b;
    if(a>=0&&b<=10)
    {
    	c=a+b;
    	cout<<c<<endl;
    }
    else
    {
        return 1;
    }
    return 0;
}
