#include <iostream>
using namespace std;
int main()
{
	int A, B;

	cin>>A;
	while(cin)
	{
		if(A>B)
		B=A;
		cin>>A;
	}
	cout<<"el numero mayor"<<B<<endl;
	return 0;
}
