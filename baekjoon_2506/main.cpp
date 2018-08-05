#include <iostream>
using namespace std;

int sum, n, i1, c;
int main(){
	cin >> c;
	for (int i = 0; i < c; i++) {
		cin >> i1;
		if (i1) sum += ++n;
		else n = 0;
	}
	cout << sum;
}