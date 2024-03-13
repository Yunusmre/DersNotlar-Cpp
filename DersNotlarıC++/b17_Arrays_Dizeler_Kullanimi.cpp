#include <iostream>

// Visual studio c++ ders 14

using namespace std;
int main17() {
	setlocale(LC_ALL, "Turkish");

	//string float vb. de�i�kenler kullan�labilir
	int arr[5]; //arr ad�nda dize olu�turdum ve 5 tane (0-4, 4 dahil) eleman� olabilir
	arr[0] = 20; // arr dizesine 0. eleman�n� 20 olarak belirledim
	arr[1] = 33; // arr dizesine 1. eleman�n� 33 olarak belirledim
	arr[2] = 45;
	arr[3] = 51;
	arr[4] = 62;

	int dizi[5] = { 20, 26, 45, 78, 54 }; // Bu �ekildede dize olu�turulabilir

	cout << arr[2] << endl;; //arr dizesinin 2. eleman�n� yazd�rd�m

	for (int i = 0; i < 5; i++) { //arr dizesindeki elemanlar� s�rayla yazd�r�r 1.
		cout << arr[i] << endl;
	}

	cout << "array�n ilk eleman�n�(de�erini) giriniz: ";
	cin >> arr[0];

	cout << endl << endl;

		//Ek K�s�m

	// sizeof(arr)    : dizenin bellekte kaplad��� alan� byte cinsinden d�nd�r�r
	// sizeof(arr[0]) : dizenin bir eleman�n�n bellekte kaplad��� alan� byte cinsinden d�nd�r�r
	int arrSize = sizeof(arr) / sizeof(arr[0]);  //arr dizesindeki eleman say�s� hesaplama
	for (int k = 0; k < arrSize; k++) { //arr dizesindeki elemanlar� s�rayla yazd�r�r 2.
		cout << arr[k] << endl;
	}

		//Ek k�s�m

	return 0;
}