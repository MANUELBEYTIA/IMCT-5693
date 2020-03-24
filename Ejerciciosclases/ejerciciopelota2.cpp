#include <iostream>
#define q1 0
#define q2 1
#define q3 2
#define q4 3
#define q5 4
#define q6 5
#define q7 6
#define q8 7
using namespace std;

int current;
void game (char c)
{
	switch(current)
	{
		case q1:
			if(c=='A')
			{
				current = q5;
				cout<<'a';
			}
			else
			{
				current = q4;
				cout<<'a';
			}
			break;
		case q2:
			if(c=='A')
			{
				current = q6;
				cout<<'a';
			}
			else
			{
				current = q3;
				cout<<'b';
			}
			break;
		case q3:
			break;
				cout<<'c';
	}
}
int main(int argc, char *argv[1])
{
	current=q1;
	for(int i=0;i<sizeof(argv[1]);i++)
	{
		game (argv[1][i]);
	}
	cout<<endl;
	cout<<current;
}
