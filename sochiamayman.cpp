#include <bits/stdc++.h>
using namespace std;
int main (){
	int a[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
	int n;
	cin>>n;
	int check=0;
	for(int i=0;i<14;i++){
		if(n % a[i] == 0){
			check=1;
			cout<<"YES";
		}
	}
	if(check==0){
		cout<<"NO";
	}
	return 0;
	
}


