#include <bits/stdc++.h>
using namespace std;
int check(int a){
	int check=0;
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			int dem=0;
			while(a%i==0){
				dem++;
				a/=i;
			}
			if(dem>=2){
				check=1;
				break;
			}
		}
	}
	return check;
}
int main (){
	int a,b;
	cin>>a>>b;
	int minn=min(a,b);
	int maxx=max(a,b);
	for(int i=minn;i<=maxx;i++){
		if(check(i)==1){
			cout<<i<<' ';
		}
	}
	return 0;
}


