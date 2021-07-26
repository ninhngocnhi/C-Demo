#include <bits/stdc++.h>
#define M 100000007
using namespace std;
long long power(long long a,long long b){
	if(b==0) return 1;
	else{
		long long temp=power(a,b/2);
		temp= temp*temp%M;
		if(b%2 !=0){
			temp=temp*a %M;
		}
		return temp;
	}
}
int main (){
	int a,b;
	cin>>a>>b;
	cout<<power(a,b);
	return 0;
}


