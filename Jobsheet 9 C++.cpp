#include<iostream>

using namespace std;
int main()
{
	int x, n, i;
	cout<<"Masukkan Nim Assisten: ";
	cin>>x;
	cout<<"Masukan Nim Praktikan: ";
	cin>>n;
	for (i=x; i<=n; i++)
	{
		cout<<"Angka ke ";
		cout<<i;
		cout<<"\n";
	}
	return 0;
}
