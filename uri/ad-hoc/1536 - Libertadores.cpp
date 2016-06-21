/**
 * URI
 * Problem Id : 1536
 * Problem Name: Libertadores
 */

#include <iostream>
using namespace std;

struct team {
	int goals;
	int vGoals;

	void clear() {
		goals = 0;
		vGoals = 0;
	}
};

int main () {

	int n, m, v;
	char x;
	team team1, team2;

	cin >> n;
	while (n--) {
		team1.clear();
		team2.clear();

		cin >> m >> x >> v;

		team1.goals += m;
		team2.goals += v;
		team2.vGoals += v;

		cin >> m >> x >> v;

		team2.goals += m;
		team1.goals += v;
		team1.vGoals += v;

		if (team1.goals > team2.goals || (team1.goals == team2.goals && team1.vGoals > team2.vGoals)) {
			cout << "Time 1" << endl;
		} else if (team1.goals < team2.goals || (team1.goals == team2.goals && team1.vGoals < team2.vGoals)) {
			cout << "Time 2" << endl;
		} else {
			cout << "Penaltis" << endl;
		}
	}

	return 0;
}