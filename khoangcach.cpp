#include <bits/stdc++.h>
using namespace std;
int main (){
	string a,b;
	cin>>a>>b;
	int lena=a.size(),lenb=b.size();
	int ans=0;
	for(int i=0;i<=lena-lenb;i++){
		int dem=0;
		for(int j=0;j<lenb;j++){
			if(a[i+j] != b[j]){
				dem++;
			}
		}
		if(dem%2==0){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}


