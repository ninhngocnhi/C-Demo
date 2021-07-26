#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	long long x;
	cin>>n>>x;
	long long a[n+1],maxx=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		maxx=max(maxx,a[i]);
	}
	a[n]=maxx+1;
	sort(a,a+n+1);
	long long val=0, cou=n+1;
	for(int i=0;i<n+1;i++){
		int dem=1,check=i;
		for(int j=i+1;j<n+1;j++){
			if(a[j]==a[i]){
				dem++;
			}
			else{
				check=j-1;
				if(cou>dem){
					cou=dem;
					val=a[i];
				}
				else if(cou==dem){
					val=max(val,a[i]);
				}
				break;
			}
		}
		i=check;
	}
	long long ans= n*x -cou*val;
	cout<<ans;
	return 0;
}


