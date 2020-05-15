#include <iostream>
using namespace std;

int main ()
{
	int m = 1, n, j = 1;
		cout << "Masukkan 2 digit terakhir NIM anda \n";
		cin >> n;
	do{
		j *= n;
		m++;
	}
	while ( m <= 5);
	cout << j;
}
