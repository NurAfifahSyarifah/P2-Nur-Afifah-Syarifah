#include<iostream>
using namespace std;
int main()
{
	int NIM =18, batas = 200;
	mulai:
		cout<<NIM<<endl;
		NIM++;
		if (NIM<=batas)
		goto mulai;
		else
		goto akhir;
		akhir:
	return 0;
}
