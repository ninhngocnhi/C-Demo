#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int len= s.size();
		int dem[10]={0};
		for(int i=0;i<len;i++){
			int t=s[i]-'0';
			dem[t]++;
		}
		int dl=0,dc=0;
		int maxx=0;
		for(int i=9;i>=0;i--){
			if(dem[i] !=0 && dem[i]%2 !=0){
				dl++;
				maxx=max(maxx,dem[i]);
			}
			else if(dem[i] !=0 && dem[i]%2 ==0){
				dc++;
			}
		}
		if(dl !=0 && (dc==0 || dc==1 && dem[0]%2==0) ){
			int ans=0,so=1;
			for(int i=1;i<10;i++){
				if(ans<=dem[i]){
					ans=dem[i];
					so=i;
				}
			}
			for(int i=0;i<ans;i++){
				cout<<so;
			}
			cout<<endl;
		}
		else{
			int d=0,le;
			for(int i=9;i>=0;i--){
				if(dem[i]%2 !=0){
					if(dem[i]==maxx && d==0){
						d=1;
						le=i;
					}
					else{
						dem[i]=0;
					}
				}
			}
			for(int i=9;i>=0;i--){
				if(dem[i] !=0){
					for(int j=0;j<dem[i]/2;j++){
						cout<<i;
					}
				}
			}
			if(d==1){
				cout<<le;
			}
			for(int i=0;i<10;i++){
				if(dem[i] !=0){
					for(int j=0;j<dem[i]/2;j++){
						cout<<i;
					}
				}
			}
			cout<<endl;	
		}
	}
	return 0;
}


