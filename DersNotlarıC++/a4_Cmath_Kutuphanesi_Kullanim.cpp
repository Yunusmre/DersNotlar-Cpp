#include <iostream>
#include <cmath> //Visual Stuido, iostream K�t�phanesi i�ine, cmath k�t�phanesini eklemi�tir.

// Visual studio c++ ders 4

using namespace std; 

int main4() {

	int y;
	y = pow(2, 3); //pow yani �ss� alma i�in kullan�l�r

	cout << "2^5 Isleminin Sonucu: " << y << endl;

	//

	y = floor(2.1); //Ondal�kl� say�y� en d���k say�ya yuvarlar 2.1'i 2 ye yuvarlar

	cout << "2.1 Floor Isleminin Sonucu: " << y << endl;

	//

	y = ceil(2.1); //Ondal�kl� say�y� en y�ksek say�ya yuvarlar 2.1'i 3 ye yuvarlar

	cout << "2.1 ceil Isleminin Sonucu: " << y << endl;

	//

	y = round(2.1); //Ondal�kl� say�y� yuvarlar 2.1'i 2 ye yuvarlar

	cout << "2.1 round Isleminin Sonucu: " << y << endl;

	return 0;
}