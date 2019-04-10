/**
 * URI
 * Problem Id : 2869
 * Problem Name: Falando em Divisor...
 */

#include <iostream>
#include <map>
#include <cmath>
using namespace std;

// int main () {

//   int c, n, i = 1, div = 1;
//   map<long, long> numbers, dividers;

//   for(; div <= 100; i++) {
//     // long start = i / 2;
    
//     // while(start != 0 && i % start != 0) {
//     //   start--;
//     // }
    
//     // numbers[i] = numbers[start] + 1;

//     // if (dividers.count(numbers[i]) == 0) {
//     //   dividers[numbers[i]] = i % 1000000007;
//     //   div = numbers[i];
//     // }

//     cout << div << " - " << fmod(pow(2, div++), 1000000007) << endl;
//   }

//   cin >> c;
//   while(c--) {
//     cin >> n;

//     cout << dividers[n] << endl;
//   }

// 	return 0;
// }

int fast_pow(long long base, long long n,long long M)
{
    if(n==0)
       return 1;
    if(n==1)
    return base;
    long long halfn=fast_pow(base,n/2,M);
    if(n%2==0)
        return ( halfn * halfn ) % M;
    else
        return ( ( ( halfn * halfn ) % M ) * base ) % M;
}
int findMMI_fermat(int n,int M)
{
    return fast_pow(n,M-2,M);
}
int main()
{
    long long fact[100001];
    fact[0]=1;
    int i=1;
    int MOD=1000000007;
    while(i<=100000)
    {
        fact[i]=(fact[i-1]*i)%MOD;
        i++;
    }
    while(1)
    {
        int n,r;
        printf("Enter n: ");
        scanf(" %d",&n);
        printf("Enter r: ");
        scanf(" %d",&r);
        long long numerator,denominator,mmi_denominator,ans;
        //I declared these variable as long long so that there is no need to use explicit typecasting
        numerator=fact[n];
        denominator=(fact[r]*fact[n-r])%MOD;
        mmi_denominator=findMMI_fermat(denominator,MOD);
        ans=(numerator*mmi_denominator)%MOD;
        printf("%lld\n",ans);
    }
    return 0;
}