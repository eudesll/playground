/**
 * URI
 * Problem Id : 2310
 * Problem Name: Voleibol
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

	int n, s, b, a, sT, bT, aT, sS, bS, aS;
	string name;

	sT = bT = aT = sS = bS = aS = 0;

	cin >> n;
	while (n--) {
		cin >> name >> s >> b >> a;

		sT += s;
		bT += b;
		aT += a;

		cin >> s >> b >> a;

		sS += s;
		bS += b;
		aS += a;
	}

	cout << "Pontos de Saque: "    << fixed << setprecision(2) << (sS * 100.0 / sT) << " %." << endl;
	cout << "Pontos de Bloqueio: " << fixed << setprecision(2) << (bS * 100.0 / bT) << " %." << endl;
	cout << "Pontos de Ataque: "   << fixed << setprecision(2) << (aS * 100.0 / aT) << " %." << endl;

	return 0;
}