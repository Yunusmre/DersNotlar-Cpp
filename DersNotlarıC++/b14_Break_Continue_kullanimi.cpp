#include <iostream>

// Visual studio c++ ders 12

using namespace std;
int main14() {
	setlocale(LC_ALL, "Turkish"); //c++ derleyicisinde t�rk�e karakter kullanmak i�in (sade string de�i�kenlerde kullan�lmaz)

	for (int i = 0; i < 20; i++){
		if ( i == 10) {
			break; //D�ng� i�erisinde kullan�labiilir. break �al��t��� an d�ng� durur. (d�ng�den ��kar)
		}
		cout << i << endl;
	}

	cout << endl;
	cout << endl;
	cout << endl;

	for (int i = 0; i < 20; i++) {
		if (i == 10) {
			continue; //D�ng� i�erisinde kullan�labiilir. continue �al��t��� an d�ng� devam eder ve alt kodlar� �al��t�rmadan ba�a d�ner. (ko�ul sa�lan�rsa d�ng� �al��maya devam eder)
		}
		cout << i << endl;
	}

	return 0;
}