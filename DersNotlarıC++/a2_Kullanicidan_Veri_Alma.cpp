#include <iostream>

// Visual studio c++ ders 2

using namespace std;

int main2() {

	int en, boy, alan; //Birden fazla de�i�ken atarken virg�l kullan�labilir.

	//cin kullan�m� 1. Y�ntem
	cout << "Lutfen Dikdortgenin Enini Giriniz: ";
	cin >> en; // Kullan�c�dan bilgi al�r ve en de�i�kenine atar.
	cout << endl;

	cout << "Lutfen Dikdortgenin Boyunu Giriniz: ";
	cin >> boy;
	cout << endl;

	//cin kullan�m� 2. Y�ntem
	cout << "Lutfen Dikdortgenin Enini ve boyunu Giriniz: ";
	cin >> en >> boy; //Bo�luk Veya Enter Kullanrak, Ayn� anda 2 veri Giri�i Yap�labilir.
	cout << endl;

	alan = en * boy;
	cout << "Lutfen Dikdortgenin Alani: " << alan << endl;
	cout << endl;

	return 0;
}