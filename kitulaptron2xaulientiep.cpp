#include <bits/stdc++.h>
using namespace std;
struct xau{
	string s;
};
int main (){
	int n;
	cin>>n;
	xau ds[n];
	for(int i=0;i<n;i++){
		cin>>ds[i].s;
	}
	int d[n][n];
	for(int x=0;x<n-1;x++){
		for(int y=x+1;y<n;y++){
			int l1=ds[x].s.size(),l2=ds[y].s.size();
			int dem=0,i=0,j=0;
			while(i<l1 && j<l2){
				if(ds[x].s[i]==ds[y].s[j]){
					dem++;
					i++;
					j++;
				}
				else if(ds[x].s[i] < ds[y].s[j]){
					i++;
				}
				else{
					j++;
				}
			}
			d[x][y]=dem;
			d[y][x]=dem;
		}
	}
	int ans=270;
	int a[n], stop=0;
    for(int i=0;i<n;i++){
    	a[i]=i;
	}
	while(stop==0){
		int dem=0;
		for(int i=0;i<n-1;i++){
			dem+=d[a[i]][a[i+1]];
		}
		ans=min(ans,dem);
		int i=n-2;
	    while(i>=0 && a[i]>a[i+1]){
	    	i--;
		} 
	    if(i<0) stop=1;
	    else
	    {
	        int k=n-1;
	        while(a[k]<a[i]) k--;
	        swap(a[k],a[i]); 
	        int e=n-1,b=i+1;
	        while(e>b)
	        {
	            swap(a[e],a[b]);
	            b++;e--;
	        }
	    }
	}
	cout<<ans;
	return 0;
}


