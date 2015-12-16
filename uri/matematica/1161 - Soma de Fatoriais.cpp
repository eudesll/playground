/* 
   URI
   Problem Id : 1161
   Problem Name: Soma de Fatoriais
*/

#include <iostream>
using namespace std;

long long fatorial (int num) {
	long long fatorial = 1;

	for (int i = num; i > 1; i--) {
		fatorial *= i;
	}

	return fatorial;
}

int main () {

	int a, b;
	long long valorFatorial[21] = {0}, result;

	while (cin >> a >> b) {

		if (valorFatorial[a] == 0) {
			valorFatorial[a] = fatorial(a);
		}

		if (valorFatorial[b] == 0) {
			valorFatorial[b] = fatorial(b);
		}

		result = valorFatorial[a] + valorFatorial[b];
		cout << result << endl;

	}

	return 0;
}