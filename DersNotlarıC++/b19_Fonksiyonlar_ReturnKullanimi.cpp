#include <iostream>

// Visual studio c++ ders 15

using namespace std;


int alanHesapla(int x, int y) { // alanHesapla ad�nda fonksiyon olu�turdum ve int olarak x ve y de�erlerini istedim
	int alan = x * y;

	return alan; // alan de�i�kenini d�nd�rd�m.
}

void ekranaMesajYaz() { // de�er d�nd�rmeyen fonksiyonlarda void kullan�l�r 
	cout << "Merhaba c++" << endl;
	cout << "Merhaba c++" << endl;
	cout << "Merhaba c++" << endl;
	cout << "Merhaba c++" << endl;
}

void yasGoster(int dogumyili) { // yasGoster fonsiyonu verilen de�eri 2024 y�l�ndan ��kart�r ve ya�� bulur
	int yas = 2024 - dogumyili;

	cout << "Yasiniz: " << yas << endl;
}



int main19() {

	int sonuc = alanHesapla(2, 5); // alanHesapla fonksiyonunu �a��rd�m ve x = 2, y = 5 de�erini verdim ve sonuc de�erine aktard�m
	cout << "Dikdortgen Alani: " << sonuc << endl;

	cout << endl << endl;

	ekranaMesajYaz(); // ekranaMesajYaz fonksiyonunu �a��r�dm

	cout << endl << endl;

	yasGoster(2007); // yasGoster fonksiyonunu �a��r�dm, dogumyili parametresine 2007 degerini verdim

	return 0;
}

