#include <iostream>

// Visual studio c++ S�nav 1

using namespace std;
int main9() {

	// Kullan�c�dan 3 tane tam say� al�n�z.
	// Bu 3 tamsay�n�n en b�y�g�n� ekrana yazd�r�n�z.
	// Bunlar� yaparken en az say�da kod yazarak yapmaya �al���n�z.

	int sayi1, sayi2, sayi3, sonuc;

	cout << "3 tane sayi giriniz: ";
	cin >> sayi1 >> sayi2 >> sayi3;


	if (sayi1 >= sayi2 && sayi1 >= sayi3) {
		sonuc = sayi1;
	}
	else if (sayi2 >= sayi1 && sayi2 >= sayi3) {
		sonuc = sayi2;
	}
	else{
		sonuc = sayi3;
	}

	cout << "En Buyuk Sayi: " << sonuc << endl;

	return 0;
}