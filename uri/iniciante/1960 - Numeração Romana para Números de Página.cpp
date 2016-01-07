/* 
   URI
   Problem Id : 1960
   Problem Name: Numeração Romana para Números de Página
*/

#include <iostream>
using namespace std;

int main () {

	// I : 1, V : 5, X : 10, L : 50, C : 100, D : 500, M : 1000.
	int num;
	string result = "";

	cin >> num;

	struct romanDate_t { unsigned int value; char const* numeral; };
    const struct romanDate_t romanDate[] = {
        {1000, "M"}, {900, "CM"},
        {500, "D"}, {400, "CD"},
        {100, "C"}, { 90, "XC"},
        { 50, "L"}, { 40, "XL"},
        { 10, "X"}, { 9, "IX"},
        { 5, "V"}, { 4, "IV"},
        { 1, "I"},
        { 0, NULL} // end marker
    };

    for (const romanDate_t* current = romanDate; current->value > 0; ++current) {
        while (num >= current->value) {
            result += current->numeral;
            num -= current->value;
        }
    }

	cout << result << endl;

	return 0;
}