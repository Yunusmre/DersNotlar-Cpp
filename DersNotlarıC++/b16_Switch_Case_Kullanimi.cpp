#include <iostream>

// Visual studio c++ ders 13

using namespace std;
int main16() {
	setlocale(LC_ALL, "Turkish");

	int sayi;
	cout << "L�tfen 1 ile 5 aras�nda bir say� girniz: ";
	cin >> sayi;

	//switch'e veri girilir girilen veri case ile kontrol edilir. girilen veri'ye g�re fonksiyon a�l��t�r�r
	//girilen veri yoksa veya yanl��sa default �al���r

	switch (sayi) { 
		case 1:
			cout << "Se�iminiz 1" << endl;
			break;
		case 2:
			cout << "Se�iminiz 2" << endl;
			break;
		case 3:
			cout << "Se�iminiz 3" << endl;
			break;
		case 4:
			cout << "Se�iminiz 4" << endl;
			break;
		case 5:
			cout << "Se�iminiz 5" << endl;
			break;
		default:
			cout << "Hatal� say� girdiniz!" << endl;
			break;

	}

	return 0;
}

