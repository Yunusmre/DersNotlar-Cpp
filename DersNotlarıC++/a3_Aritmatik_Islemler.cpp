#include <iostream>

// Visual studio c++ ders 3


using namespace std;

int main3() {
	/*
	
	+   Toplama
	-   ��kartma
	*   �arpma
	/   B�lme
	%   Mod alma

	*/
	int sayi1 = 80;
	int sayi2 = 90;

	sayi1++; // sayi1 de�i�kenine 1 ekler
	sayi2 += 1; //sayi2 de�i�kenine 1 ekler

	sayi1--; //sayi1 de�i�kenden 1 ��kart�r

	int ort = (sayi1 + sayi2) / 2;

	cout << "Sayilarin Ortalamasi: " << ort << endl;

	return 0;
}
