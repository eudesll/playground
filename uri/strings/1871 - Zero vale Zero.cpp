/**
 * URI
 * Problem Id : 1871
 * Problem Name: Zero vale Zero
 */

#include <iostream>
#include <sstream>
#define SSTR( x ) static_cast< std::ostringstream & >( \
        ( std::ostringstream() << std::dec << x ) ).str()
using namespace std;

int main () {

	long long int m, n;
	string x;

	while (cin >> m >> n && m != 0 && n != 0) {

		x = SSTR(m + n);

		size_t start_pos = 0;
	    while((start_pos = x.find("0", start_pos)) != std::string::npos) {
	        x.replace(start_pos, 1, "");
	        start_pos += 0;
	    }

	    cout << x << endl;
	}

	return 0;
}