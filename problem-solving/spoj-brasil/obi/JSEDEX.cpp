/* 
   SPOJ Brasil Problem Set (obi)
   8696. Sedex
   Problem Name: JSEDEX
*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {

	int diamBola, altCaixa, largCaixa, profCaixa;
	string result;

	cin >> diamBola >> altCaixa >> largCaixa >> profCaixa;

	result = (diamBola <= altCaixa) ? ((diamBola <= largCaixa) ? ((diamBola <= profCaixa) ? "S" : "N") : "N") : "N";
	cout << result << endl;

	return 0;
}