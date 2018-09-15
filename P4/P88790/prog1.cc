#include <iostream>
using namespace std;

//P88790
//pre: dos naturals a i b, un més gran que 0.
//post: retornar el mcd (Euclides) dels dos.


int mcd (int a, int b) {
	while (b!=0) {
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}

int main () {
	int a, b;
	while (cin >> a >> b) {
		cout << mcd(a, b) << endl;
	} 
	return 0;
}
