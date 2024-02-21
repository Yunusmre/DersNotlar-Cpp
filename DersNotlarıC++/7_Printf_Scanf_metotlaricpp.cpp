#define _CRT_SECURE_NO_WARNINGS //scanf fonksiyonu eski (c dilide) kullan�ld��� i�in ilk ba�a bu yazd�r�lmal�d�r
#include <iostream>

using namespace std;

int main() { // c dilinden ge�enler
	int x = 5;
	float y = 3.2;

	printf("Sayilar: x: %d ve y: %.1f", x, y);  


	cout << endl << endl;


	char metin[] = "Merhabaa"; // c dilinde string yerine char kullan�l�r
	printf("Metin: %s", metin); 


	/* 
	printf fonksiyonu ile ekrana yaz� yazd�r�rken de�i�kenler t�rnak i�inde
	belirtilir ve t�rnaktan sonra virg�l ile eklenir
	*/

	cout << endl << endl;

	// int ve float
	scanf("%f", &y);  //& - adres i�areti
	printf("%f", y);

	cout << endl;

	//string
	char isim[25]; //maximum 24 karakter kullan�labilir (1 null karakter vard�r yani c�mle sonunu belirler /0 d�r.)
	printf("Lutfen isminizi giriniz: ");
	scanf("%s", isim);
	printf("Merhaba %s", isim);

	/*
	kullan�c�dan veri almak i�in kullan�l�r. �lk olarak al�n�cak de�er t�rnak i�inde belirtilir
	sonra aktar�lacak de�i�ken & yan�na (int ve float i�in) yaz�l�r. scanf("%d", &x)
	*/

	/*
	%d - int de�i�kenler i�in
	%f - float de�i�kenler i�in
	%.1f - float de�i�keni yazarken hassasiyet ayarlan�r. 3.2 say�s� i�in: %.1f = 3.2, %.2.f = 3.20 yazd�r�r (sade yazd�rma)

	%s - string ifadeler i�in kullan�l�r
	*/
	
}