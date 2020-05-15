#include<iostream>
using namespace std;
int main()
{
int x,y;
for(x=3; x>=1; x--)
{
	for (y=3; y>=1; y--)
	{
		cout<<"("<<x<<","<<y<<"),";
	}
	cout<<endl;
}
return 0;
}
