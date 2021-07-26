#include <bits/stdc++.h>
using namespace std;
int main (){
	string a,b;
	cin>>a>>b;
	int l1=a.size(),l2=b.size();
	int dem=0,i=0,j=0;
	while(i<l1 && j<l2){
		if(a[i]==b[j]){
			dem++;
			i++;
			j++;
		}
		else if(a[i]<b[j]){
			i++;
		}
		else{
			j++;
		}
	}
	cout<<dem;
	return 0;
}


