#include <iostream>

// Visual studio c++ S�nav 3

using namespace std;
int main15() {

	//	c++ S�nav Sorusu
	//
	//	Kullan�c�n�n konsoldan girdi�i say�ya g�re ekrana a��a��daki �ekilde ��kt� veren program� yaz�n�z:
	//
	//	Lutfen Bir Sayi Giriniz: 4
	//	1
	//	2 2 
	//	3 3 3
	//	4 4 4 4

	int sayi;

	cout << "Lutfen Bir Sayi Giriniz: ";
	cin >> sayi;

	for (int i = 0; i <= sayi; i++) {
		for (int k = 0; k < i; k++) {
			cout << i << " ";
		}
		cout << endl;
	}

	return 0;
}
