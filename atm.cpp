#include <bits/stdc++.h>
using namespace std;
int main (){
	int k;
	cin>>k;
	int a[]={500, 200, 100, 50, 20, 10, 5, 2, 1};
	while(k--){
		int s,dem=0;
		cin>>s;
		for(int i=0;i<9;i++){
			if(s>=a[i]){
				long long x=s/a[i];
				dem+=x;
				s-=x*a[i];
			}
		}
		cout<<dem<<endl;
	}
	return 0;
}


