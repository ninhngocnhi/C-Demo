#include <bits/stdc++.h>
#define N 1000000007
using namespace std;
int n;  // kích thu?c m?ng
int t[];

void build() {  // kh?i t?o cây
  for (int i = n - 1; i > 0; --i)
    t[i] = t[i<<1] + t[i<<1|1];
}

void MULTIPLY(int p, int value) {  // gán giá tr? t?i v? trí p
  for (t[p += n] *= value; p > 1; p >>= 1)
    t[p>>1] = t[p] + t[p^1];
}

long long TOTIENT(int l, int r) {  // tính t?ng do?n [l, r)
  int res = 1;
  for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
    if (l&1) res *= t[l++];
    if (r&1) res *= t[--r];
  }
  return res;
}
long long phi(long long n) {
	int result = n;
	for(int i = 2; i * i <= n; i++)
		if(n % i == 0) {
			while(n % i == 0)
			n /= i;
			result -= result / i;
		}
	if(n > 1)
	result -= result / n;
	return result % N;
}

int main() {
  cin>>n;
  for (int i = 0; i < n; ++i) cin>> t + n + i;
  build();
  MULTIPLY(0, 1);
  cout<< phi(TOTIENT)<<endl;
  return 0;
}
