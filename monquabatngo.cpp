#include <iostream>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		long long m;
		int k;
		cin>>m>>k;
		long long ans=0,i=1;
		while(m>0){
			if(m<= k*i){
				ans+=m/i;
				break;
			}
			else{
				ans+=k;
				m=m-k*i;
				i++;
			}
		}
		cout<<ans;
	}
	return 0;
}

