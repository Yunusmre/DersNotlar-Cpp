#include <iostream>

// Visual studio c++ ders 14

using namespace std;
int main18() {
	int dizi[2][3] = { {21, 34, 42}, // 2x3 matrisli dize, 2 sat�r 3 s�tun
					 {22, 35, 47} };

	//cout << dizi[1][1] << endl; // 35 say�s�n� yazd�r�r

	for (int i = 0; i < 2; i++) { // for d�ng�s� ile t�m �ok boyutlu dizeyi d�zenli �ekilde yazd�rma
		for (int k = 0; k < 3; k++) {
			cout << dizi[i][k] << " ";
		}
		cout << endl;
	}

	return 0;
}
