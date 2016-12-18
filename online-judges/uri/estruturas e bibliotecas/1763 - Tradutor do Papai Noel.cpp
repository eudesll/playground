/**
 * URI
 * Problem Id : 1763
 * Problem Name: Tradutor do Papai Noel
 */

#include <iostream>
#include <map>
using namespace std;

int main () {

	string country;
	map<string, string> msgs;

	msgs["brasil"]         = "Feliz Natal!";
	msgs["alemanha"]       = "Frohliche Weihnachten!";
	msgs["austria"]        = "Frohe Weihnacht!";
	msgs["coreia"]         = "Chuk Sung Tan!";
	msgs["espanha"]        = "Feliz Navidad!";
	msgs["grecia"]         = "Kala Christougena!";
	msgs["estados-unidos"] = "Merry Christmas!";
	msgs["inglaterra"]     = "Merry Christmas!";
	msgs["australia"]      = "Merry Christmas!";
	msgs["portugal"]       = "Feliz Natal!";
	msgs["suecia"]         = "God Jul!";
	msgs["turquia"]        = "Mutlu Noeller";
	msgs["argentina"]      = "Feliz Navidad!";
	msgs["chile"]          = "Feliz Navidad!";
	msgs["mexico"]         = "Feliz Navidad!";
	msgs["antardida"]      = "Merry Christmas!";
	msgs["canada"]         = "Merry Christmas!";
	msgs["irlanda"]        = "Nollaig Shona Dhuit!";
	msgs["belgica"]        = "Zalig Kerstfeest!";
	msgs["italia"]         = "Buon Natale!";
	msgs["libia"]          = "Buon Natale!";
	msgs["siria"]          = "Milad Mubarak!";
	msgs["marrocos"]       = "Milad Mubarak!";
	msgs["japao"]          = "Merii Kurisumasu!";

	while (cin >> country) {

		if (msgs.find(country) != msgs.end()) {
			cout << msgs[country] << endl;
		} else {
			cout << "--- NOT FOUND ---" << endl;
		}

	}

	return 0;
}