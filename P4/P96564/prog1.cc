#include <iostream>
using namespace std;

//P96564
//pre: diversos casos (n). cada un comença amb n >=1 seguit de Xn naturals.
//     un 0 marca el final de l'entrada.
//post: a cada cas escriure el minim comu multiple != 0.

int mcd (int a, int b) {
	while (b != 0) {
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}

int main () {
	int n;
	while (cin >> n and n > 0) {
		int a;
		int b = 1;
		double mcm;
		for (int i = 0; i < n; ++i) {
			cin >> a;
			mcm = double(a)*double(b)/double(mcd(a, b));
			b = mcm;
 		}
 		cout << int(mcm) << endl;
	}

	return 0;
}
