#include <iostream>

// Visual studio c++ ders 10

using namespace std;
int main11() {

	string sifre = "1234";
	string girilenSifre;

	do { //ilk olarak kod blo�u �al���r, �art True ise �al��maya devam eder yoksa d�ng�den ��kar
		cout << "Lutfen Sifreyi Giriniz: ";
		cin >> girilenSifre;
	} while (girilenSifre != sifre);

	cout << "Sifre Dogru Giris Basarili! " << endl;

	return 0;
}
