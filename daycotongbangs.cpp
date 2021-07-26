#include <bits/stdc++.h>
using namespace std;
int main (){
	int n,s;
	cin>>n>>s;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	if(a[0]==s){
		cout<<"YES";
	}
	else if(a[0]>s){
		cout<<"NO";	
	}
	else{
		int check=0,pos;
		for(int i=n-1;i>=0;i++){
			if(a[i]==s){
				cout<<"YES";
				check=1;
				break;
			}
			else if(a[i]<s){
				pos=i;
				break;
			}
		}
		if(check==0){
			int b[pos+1]={0},check1=0;
			b[pos]=1;
			int stop=0;
			while(stop==0){
				int sum=0;
				for(int i=0;i<pos+1;i++){
					if(b[i]==1){
						sum+= a[i];	
					}
				}
				if(sum==s){
					cout<<"YES";
					check1=1;
					break;
				}
				int i=n-1;
				while(i>=0 && b[i]==1){
					b[i]=0;
					i--;
				}
				if(i==-1){
					stop=1;
				}
				else{
					b[i]=1;
				}
			}
			if(check1==0){
				cout<<"NO";
			}
		}
		
	}
	return 0;
}


