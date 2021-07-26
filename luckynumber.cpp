#include <bits/stdc++.h>
using namespace std;
unsigned long long power(int a, int b) {
    if (b == 0) return 1;
    unsigned long long tmp = power(a, b/2);
    tmp = tmp*tmp;
    if (b % 2) tmp = tmp*a;
    return tmp;
}
int main (){
	int n;
	cin>>n;
	cout<<power(2,n+1)-2;
	return 0;
}


