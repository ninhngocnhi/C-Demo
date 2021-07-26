#include <bits/stdc++.h>
typedef long long ll;
#define Debug cout << "NoBug" << endl;
using namespace std;
int S,n,k;
int ans[50];
int a[50][50];
bool check=false;
void xuat(){
	for(int i=0;i<k;i++){
		cout << ans[i]<<' ';
	}
}
void Try(int j,int sum){
	if(j == k){
		if(sum == S)
			check=true;
		return;
	}
	if(check) return;
	if(j>0 && sum+(k-j)*ans[j-1] > S) return;
	for(int i=0;i<n;i++){
		if(check) return;
		if(a[i][j]>=ans[j-1]){
			ans[j]=a[i][j];
			Try(j+1,sum + ans[j]);
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(NULL);
	cin >> S >> k >> n;
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			cin >> a[i][j];
		}
	}
	Try(0,0);
	if(check == true){
		cout << "YES" << endl;
		xuat();
	}
	else cout << "NO";
}
