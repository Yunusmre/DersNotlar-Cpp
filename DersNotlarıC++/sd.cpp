#include <iostream>

// Visual studio c++ ders 5
//if, else

using namespace std;
int main() {

	cout << " m/s hizi Km/h a ceviren uygulamaya hosgeldiniz.." << endl;

	float v1;
	float katsayi = 3.6;

	cout << "Lutfen aracinizin m/s hizini giriniz:";
	cin >> v1;

	float v2 = (v1 * katsayi);

	cout << "Aracinizin Km/h daki hizi:" << v2 << endl << endl;
	return 0;
}




