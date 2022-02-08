/* 
   URI
   Problem Id : 2203
   Problem Name: Tempestade de Corvos
*/

#include<iostream>
#include<cmath>
using namespace std;

int main() {
  int Xf, Yf, Xi, Yi, Vi, R1, R2;
  float castTime = 1.5, posi;
  bool hit = false;
  while (cin >> Xf >> Yf >> Xi >> Yi >> Vi >> R1 >> R2) {
    posi = sqrt(pow(Xf - Xi, 2) + pow(Yf - Yi, 2));
    posi += Vi * castTime;
    
    hit = (posi >= R1 && posi <= (R1 + R2)) || (posi <= R1 && R2 > 0);
    cout << (hit ? "Y" : "N") << endl;
  }
}