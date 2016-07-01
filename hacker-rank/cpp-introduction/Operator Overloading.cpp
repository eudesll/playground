/* 
   HackerRank
   Problem Name: operator-overloading
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Matrix {

	public:

	    vector<vector<int>> a;

	    Matrix operator+(const Matrix& other) {
	        Matrix sum(*this);

	        for (unsigned int i {0}; i < sum.a.size(); ++i) {
	            for (unsigned int j {0}; j < sum.a[i].size(); ++j) {
	                sum.a[i][j] += other.a[i][j];
	            }
	        }

	        return sum;
	    }
};

int main () {
   int cases,k;
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cin >> n >> m;
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      }
      result = x+y;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }  
   return 0;
}
