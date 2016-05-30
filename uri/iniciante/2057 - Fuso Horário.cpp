/**
 * URI
 * Problem Id : 2057
 * Problem Name: Fuso Horário
 */

#include <iostream>
using namespace std;

int main () {

	int s, t, f, tempo;

	cin >> s >> t >> f;

	tempo = s + t + f;
	tempo = tempo >= 24 ? tempo - 24 : (tempo < 0 ? tempo + 24 : tempo);

	cout << tempo << endl;

	return 0;
}