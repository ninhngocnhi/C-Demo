#include <bits/stdc++.h>
using namespace std;
long long power(long long a, long long b) {
    if(a==0) return 0;
	if (b == 0) return 1;
    long long tmp = power(a, b/2);
    tmp = tmp*tmp;
    if (b % 2) tmp = tmp*a;
    return tmp;
}
int main (){
	long long n;
	cin>>n;
	int so=log((double)(n+1))/ log((double)2);
	int x=n+2-power(2,so);
	int a[so];
	for(int i=0;i<so;i++){
		a[i]=4;
	}
	int stop=0,dem=0;
	while(stop==0){
		dem++;
		if(dem==x){
			for(int i=0;i<so;i++){
				cout<<a[i];
			}
			break;
		}
		int i=so-1;
		while(i>=0 && a[i]==7){
			a[i]=4;
			i--;
		}
		if(i==-1){
			stop=1;
		}
		else{
			a[i]=7;
		}
	}       
	return 0;
}


