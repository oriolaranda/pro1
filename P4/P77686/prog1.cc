#include <iostream>
#include <string>
using namespace std;


bool es_capicua(int n) {
	int n1 = n;
	int m = 0;
	while (n1 != 0) {
		m=m*10+n1%10;
		n1/=10;
	}
	if(n==m){
		return true;
	}else{
		return false;
	}
}

int main () {
	int n;
	while (cin >> n) {
		if(es_capicua(n)){
			cout << "true" << endl;
		}else{
			cout << "false" << endl;
		}
	}
	return 0;
}