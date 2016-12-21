/* 
   HackerEarth
   Problem Name: roy-and-profile-picture
*/

#include <iostream>
using namespace std;

int main()
{
	int l, w, h, n;
	
	cin >> l >> n;
	while (n--) {
		cin >> w >> h;
		
		if (w < l || h < l) {
			cout << "UPLOAD ANOTHER" << endl;
		} else {
			if (w == h) {
				cout << "ACCEPTED" << endl;
			} else {
				cout << "CROP IT" << endl;
			}
		}
	}
	
    return 0;
}
