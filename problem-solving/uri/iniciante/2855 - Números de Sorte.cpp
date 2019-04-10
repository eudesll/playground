/**
 * URI
 * Problem Id : 2855
 * Problem Name: Números de Sorte
 */

#include <cstdio>
using namespace std;

int main () {

  int n, ni, m, sN, ret = 1;

  while (scanf("%d", &n) != EOF) {
    int ns[n];
    ni = n / 2;
    sN = ret = 2;

    for (int i = 0; i < n; i++) {
      scanf("%d", &ns[i]);
    }

    scanf("%d", &m);
    while (ns[ni] != m) {
      if (ns[ni] > m) {
        n = ni;
        ni /= 2;        
      } else {
        ni = (ni + n) / 2;
      }
    }

    ni++;
    while (ni >= sN && ret) {
      ret = ni % sN;

      ni -= ni / sN++;
    }

    printf("%c\n", (ret ? 'Y' : 'N'));
  }

	return 0;
}

// #include <stdio.h>
// #include <vector>
// #include <algorithm>
// using namespace std;
// #define MAX 305345

// int main(){
//     int N, M, i, idx;
//     while(scanf("%d", &N) != EOF){
//         vector<int> v(N+1, 0);
//         for(i = 1; i <= N; i++){
//             scanf("%d", &v[i]);
//         }
//         scanf("%d", &M);
//         idx = lower_bound(v.begin(), v.end(), M) - v.begin();
//         bool ans = true;
//         for(i = 2; i < MAX && ans && idx >= i; i++){
//             if(idx % i == 0)
//                 ans = false;
//             idx -= (idx / i);   
//         }
//         printf("%c\n", ans ? 'Y' : 'N');
//     }
//     return 0;
// }