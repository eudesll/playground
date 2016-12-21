/* 
   URI
   Problem Id : 1050
   Problem Name: DDD
*/

#include <iostream>
#include <map>
using namespace std;

int main () {

	int num;
	map<int, string> ddds;
	ddds[61] = "Brasilia";
	ddds[71] = "Salvador";
	ddds[11] = "Sao Paulo";
	ddds[21] = "Rio de Janeiro";
	ddds[32] = "Juiz de Fora";
	ddds[19] = "Campinas";
	ddds[27] = "Vitoria";
	ddds[31] = "Belo Horizonte";

	cin >> num;

	if (ddds.find(num) != ddds.end()) 
	{
		cout << ddds[num] << endl;
	} 
	else 
	{
		cout << "DDD nao cadastrado" << endl;
	}

	return 0;
}