#include <iostream>

// c++ Visual studio Ders 1

using namespace std;
int main1() { 

	string isim = "Yunus Emre"; // string �ift t�rnak ile char ise tek t�rnak ile yaz�l�r 
	int yas = 18;
	char notOrtalamasi = 'A'; //char tek karakter tutar 1 byte yer kaplar; ASCII Table ile de yaz�labilir 65(deciminal) sayisi A anlam�na gelir
	float sayisalNotOrtalamasi = 3.25;
	float sayisalNotOrtalamasi1 = 3.251412; //	Floata g�re daha detayl� ondal�k tutar
	bool sinavaGirdimi = true; // True veya false de�rini tutar, 1 bit yer kaplar

	
	cout << "Merhaba " << endl << endl << "Ogrenci Adi Soyadi: " << isim << endl; // endl Sat�r sonu yapar ve alt sat�ra ge�er
	cout << "Ogrenci yasi: " << yas << endl;
	cout << "Not Ortalamasi: " << notOrtalamasi << endl;
	cout << "Ogrenci sayisal Not Ortalamasi: " << sayisalNotOrtalamasi << endl;
	cout << "Ogrenci Sinava Girdimi: " << sinavaGirdimi << endl;
	cout << endl;
	return 0;
}