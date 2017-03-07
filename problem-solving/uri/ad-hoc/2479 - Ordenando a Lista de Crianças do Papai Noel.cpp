/**
 * URI
 * Problem Id : 2479
 * Problem Name: Ordenando a Lista de Crianças do Papai Noel
 */

#include <iostream>
#include <algorithm>
using namespace std;

struct child {
	bool goodBehavior;
	string name;

	friend bool operator< (child a, child b) {

		return (a.name < b.name);

	}
};

int main () {

	int n;
	int goodBehaviorQt = 0;

	cin >> n;
	child childs[n];
	for (int i = 0; i < n; i++) {
		string op;
		cin >> op >> childs[i].name;

		childs[i].goodBehavior = op == "+" ? true : false;
		goodBehaviorQt += childs[i].goodBehavior ? 1 : 0;
	}

	sort(childs, childs + n);

	for (int i = 0; i < n; i++) {
		cout << childs[i].name << endl;
	}

	cout << "Se comportaram: " << goodBehaviorQt << " | Nao se comportaram: " << (n - goodBehaviorQt) << endl;

	return 0;
}