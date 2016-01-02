/* 
   URI
   Problem Id : 2033
   Problem Name: Domingo de Manhã
*/

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

vector<string> &split(const string &s, char delim, vector<string> &elems) {
    stringstream ss(s);
    string item;

    while (getline(ss, item, delim)) {
        elems.push_back(item);
    }

    return elems;
}

vector<string> split(const string &s, char delim) {
    vector<string> elems;
    split(s, delim, elems);

    return elems;
}

int main () {

	int hour, min, atraso;
	string timer;

	while (cin >> timer) {
		vector<string> elems = split(timer, ':');

		istringstream ss(elems[0]);
		ss >> hour;

		ss.clear();
		ss.str(elems[1]);
		ss >> min;

		int result = (hour * 60 + min + 60) - (8 * 60);
		result = result > 0 ? result : 0;

		cout << "Atraso maximo: " << result << endl;
	}

	return 0;
}