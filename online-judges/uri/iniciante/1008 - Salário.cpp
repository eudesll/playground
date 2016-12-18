/* 
   URI
   Problem Id : 1008
   Problem Name: Salário
*/

#include <iostream>
#include <iomanip>
using namespace std;
 
int main () {
    int num, horas;
    double salarioHora;
    cin >> num >> horas >> salarioHora;
    cout << "NUMBER = " << num << endl;
    cout << "SALARY = U$ " << setiosflags (ios::fixed) << setprecision (2) << salarioHora * horas << endl;
 
    return 0;
}