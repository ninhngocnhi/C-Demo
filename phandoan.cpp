#include <bits/stdc++.h>
using namespace std;
struct node {
	long long l, r, ans, pos;
};
 
long long n, N = 200006;
long long BIT[200006];
node a[200006];
vector <int> v;
 
int comp2 (node a, node b) {
	return (a.pos < b.pos);
}
 
int comp1 (node a, node b) {
	if (a.r < b.r || (a.r == b.r && a.l > b.l)) return 1;
	else return 0;
}
 
void add(int p) {
	for (int i = p; i < N; i += i & -i) 
		BIT[i]++;
}
 
int sum(int p) {
	int ans = 0;
	for (int i = p; i > 0; i -= i & -i) ans += BIT[i];
	return ans;
}
 
int count(int l) {
	return sum(N-1) - sum(l - 1);
}
 
int find(int x) {
	int l = 0, r = n - 1;
	int ans;
	while (l <= r) {
		int mid = (l + r)/2;
		if (v[mid] >= x) {
			ans = mid;
			r = mid - 1;
		}
		else l = mid + 1;
	//	cout << mid << endl;
	}
	//cout << ans << endl;
	return ans;
}
 
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i].l >> a[i].r;
		a[i].pos = i;
	}
	sort(a, a+n, comp1); 
 
	for (int i = 0; i < n; i++) v.push_back(a[i].l);
	sort(v.begin(), v.end());
 
	for (int i = 0; i < n; i++) a[i].l = find(a[i].l) + 1;
 
	for (int i = 0; i < n; i++) {
		a[i].ans = count(a[i].l);
		add(a[i].l);
	}
	sort(a, a+n, comp2);
	for (int i = 0; i < n; i++) cout << a[i].ans << endl;
 
	return 0;
}
