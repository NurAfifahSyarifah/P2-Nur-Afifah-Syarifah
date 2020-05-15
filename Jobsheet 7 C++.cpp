#include<iostream>

using namespace std;
int main()
{
	float x;
	cout<<"masukkan ip anda:";
	cin>>x;
	if (x>=0.00&& x<=1.49){
		cout<<"anda dapat mengambil 12 sks";
	}
	if (x>=0.00&& x<=1.49){
		cout<<"anda dapat mengambil 15 sks";
	}
	if (x>=2.00&& x<=2.49){
		cout<<"anda dapat mengambil 18 sks";
	}
	if (x>=2.50&& x<=2.99){
		cout<<"anda dapat mengambil 21 sks";
	}
	if (x>=3.00&& x<=4.00){
		cout<<"anda dapat mengambil 24 sks";
}
return 0;
}
