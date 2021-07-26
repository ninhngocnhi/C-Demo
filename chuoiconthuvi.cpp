#include <bits/stdc++.h>     
using namespace std;
main (){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		string s;
		cin >> s;
		int a[k+5];
		a[0]=1;
		for(int i=1;i<=k;i++){
			a[i]=a[i-1]+1;
			if(a[i-1]==3) a[i]=1;
		}
		string tmp1="",tmp2="",tmp3="";
		for(int i=0;i<k;i++){
			if(a[i]==1) tmp1+='B';
			else if(a[i]==2) tmp1+='V';
			else tmp1+='H';
		}
		for(int i=0;i<k;i++){
			if(a[i]==1) tmp2+='V';
			else if(a[i]==2) tmp2+='H';
			else tmp2+='B';
		}
		for(int i=0;i<k;i++){
			if(a[i]==1) tmp3+='H';
			else if(a[i]==2) tmp3+='B';
			else tmp3+='V';
		}
		int ans1=10000000,ans2=10000000,ans3=10000000;
		int dem1=0,dem2=0,dem3=0;
		for(int i=0;i<n-k+1;i++){
			dem1=0,dem2=0,dem3=0;
			for(int j=0;j<k;j++){
				if(tmp1[j]!=s[j+i]) dem1++;
				if(tmp2[j]!=s[j+i]) dem2++;
				if(tmp3[j]!=s[j+i]) dem3++;
			}
			ans1=min(ans1,dem1);
			ans2=min(ans2,dem2);
			ans3=min(ans3,dem3);
		}
		cout << min(ans1,min(ans2,ans3))<<"\n";
	}
 return 0;
}
