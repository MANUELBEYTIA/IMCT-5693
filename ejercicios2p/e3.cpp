#include<iostream>
using namespace std;
int ingre(int a)
{
	int i;	
	int nums[a];	
	for(i=0;i<a;i++)
	cin>>nums[i];
	return nums[i];
}
int main()
{
	int x, y, k;
	cin>>x;
	cin>>y;
	cin>>k;
	int a=ingre(x);
	cout<<a<<endl;
	int soli[x]={ingre(x)};
	for(int i=0;i<x;i++)
	cout<<soli[x]<<" ";
	return 0;
}
