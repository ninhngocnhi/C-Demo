#include <bits/stdc++.h>
using namespace std;
struct nd{
	int a[100007];
};
int main (){
	int n,m;
	cin>>n>>m;
	nd ds[m];
	int x,y;
	int b[m]={0};
	for(int i=0;i<n;i++){
		cin>>x>>y;
		ds[x-1].a[b[x-1]]=y;
		b[x-1]++;
	}
	for(int i=0;i<m;i++){
		sort(ds[i].a,ds[i].a + b[i],greater<int>());
	}
	int A[m]={0};
	A[m-1]=1;
	int stop=0;
	long long ans= -1000000000000;
	while(stop==0){
		int c[m]={0},v=0,minn=100007;
		long long sum=0;
		for(int i=0;i<m;i++){
			if(A[i]==1){
				c[v]=i;
				v++;
				minn=min(minn,b[i]);
			}
		}
		for(int j=0;j< minn;j++){
			for(int k=0;k<v;k++){
				sum+=ds[c[k]].a[j];
			}
			ans=max(ans,sum);
			if(sum<0){
				break;
			}
		}
		int i=m-1;
		while(i>=0 && A[i]==1){
			A[i]=0;
			i--;
		}
		if(i==-1){
			stop=1;
		}
		else{
			A[i]=1;
		}
	}
	if(ans<=0){
		cout<<'0';
	}
	else{
		cout<<ans;
	}
	return 0;
}


