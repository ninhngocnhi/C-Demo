#include <bits/stdc++.h>
using namespace std;
int main (){
	string s;
	cin>>s;
	long long ans=0,len=s.size();
	int A[10],B[len],u=0,check=0;
	for(int i=0;i<len;i++){
		if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ){
			B[i]=0;
		}
		else if(s[i]=='L'){
			check++;
			B[i]=1;
		}
		else if(s[i]=='_'){
			A[u]=i;
			B[i]=1;
			u++;
		}
		else{
			B[i]=1;
		}
	}
	int a[u]={0};
	int stop=0;
	while(stop==0){
		int d0=0,d1=0;
		for(int i=0;i<u;i++){
			if(a[i]==0){
				d0++;
			}
			else{
				d1++;
			}
		}
		if((check==0 && d1>0) || check>0){
			for(int i=0;i<u;i++){
				B[A[i]]=a[i];
			}
			long long ktra=1,s=1;
			for(int i=0;i<len-2;i++){
				int c0=0,c1=0;
				for(int j=i;j<i+3;j++){
					if(B[j]==1){
						c1++;
					}
					else{
						c0++;
					}
				}
				if(c1==0 || c0==0 ){
					ktra=0;
					break;
				}
			}
			if(ktra==1 && check==0){
				s=s* pow(5,d0);
				s=s* (pow(21,d1)-pow(20,d1));
				ans+=s;
			}
			else if(ktra==1 && check>0 ){
				s=s* pow(5,d0);
				s=s*pow(21,d1);
				ans+=s;
			}
		}
		int i=u-1;
		while(i>=0 && a[i]==1){
			a[i]=0;
			i--;
		}
		if(i==-1){
			stop=1;
		}
		else{
			a[i]=1;
		}
	}
	cout<<ans;
	return 0;
}


