/**
 * URI
 * Problem Id : 2486
 * Problem Name: C Mais ou Menos?
 */

#include <iostream>
#include <map>
using namespace std;

int main () {

  map<string, int> foods;
  string food;
  int t, n, total;

  foods["suco de laranja"] = 120;
  foods["morango fresco"] = 85;
  foods["mamao"] = 85;
  foods["goiaba vermelha"] = 70;
  foods["manga"] = 56;
  foods["laranja"] = 50;
  foods["brocolis"] = 34;

  while (cin >> t && t) {
    total = 0;

    while (t--) {
      cin >> n;
      getline(cin, food);
      food = food.substr(1);

      total += n * foods[food];
    }

    if (total > 130) {
      cout << "Menos " << (total - 130) << " mg" << endl;
    } else if (total < 110) {
      cout << "Mais " << (110 - total) << " mg" << endl;
    } else {
      cout << total << " mg" << endl;
    }
  }

	return 0;
}