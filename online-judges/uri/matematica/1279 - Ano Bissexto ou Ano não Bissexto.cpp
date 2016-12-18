/**
 * URI
 * Problem Id : 1279
 * Problem Name: Ano Bissexto ou Ano não Bissexto
 */

#include <iostream>
#include <cstring>

#define N 1000001
using namespace std;

 
int split (char ara[], int len, int year) {
    int long long n = 0;
 
    for (int i = 0; i < len; i++){
        n = (n * 10 + (ara[i] - '0')) % year;
    }

    if (n == 0) {
        return 0;
    }
    
    return 1; 
}
 
 
int main() {

	char year[N]={0};
	int unsigned long long len;
	bool ord, first = false, leap;

	while (cin >> year){
		len = strlen(year);

		if(first) {
			cout << endl;
		}

		first = true;
		ord = true;
		leap = false;

		if (split(year, len, 4) == 0 && split(year, len, 100) != 0 || split(year, len, 400) == 0) {
			ord = false;
			leap = true;

			cout << "This is leap year." << endl;
		}

		if (split(year, len, 15) == 0) {
			ord = false;

			cout << "This is huluculu festival year." << endl;
		}

		if (split(year, len, 55) == 0 && leap){
			cout << "This is bulukulu festival year." << endl;
		}
		
		if (ord) {
			cout << "This is an ordinary year." << endl;
		}

		memset(year, '0', len + 1);
	}
 
    return 0;
}