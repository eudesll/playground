/**
 * URI
 * Problem Id : 1218
 * Problem Name: Getline Three - Calçados
 */

#include <iostream>
using namespace std;

int main () {

	int m, f, c = 0;;
	string size, type, line;

	while(cin >> size) {
		m = f = 0;

       	cin.ignore();
        getline(cin, line);

        if (c) {
        	cout << endl;
        }

        for (size_t i = 0; i < line.length(); i += 5){
            if (size.at(0) == line.at(i) && size.at(1) == line.at(i + 1)){
                if (line.at(i + 3) == 'M') {
                	m++;
                } else {
                	f++;
                }
            }
        }

        cout << "Caso " << ++c << ":" << endl;
        cout << "Pares Iguais: " << m + f << endl;
        cout << "F: " << f << endl;
        cout << "M: " << m << endl;
	}

	return 0;
}