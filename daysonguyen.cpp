#include <bits/stdc++.h>
using namespace std;
const long long base = 1e9+7;
long long n, m, k, d;
long long a[100005];
map <int, int> M;
 
long long power(long long a, long long b, long long m) {
    if (b == 0) return 1;
    long long tmp = power(a, b/2, m);
    tmp = tmp*tmp % m;
    if (b % 2) tmp = tmp*a % m;
    return tmp;
}
 
long long Try(long long n) {
    if (n == 1) return 1;
    if (M[n] != 0) return M[n];
    long long tmp = power(2, n-1, base) - 1;
    for (int i = 2; i*i <= n; i++) 
        if (n % i == 0) {
            int k = n/i;
            tmp = (tmp - Try(i) + base) % base;
            if (k != i) tmp = (tmp - Try(k) + base) % base;
        }
    M[n] = tmp;
    return tmp;
}
main () {
    cin >> d >> n;
    if (n % d) cout << 0 << endl;
    else cout << Try(n/d);
}
