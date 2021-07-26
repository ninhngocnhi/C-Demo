#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	int a[3]={0},b[3]={25,50,100},check=1;
	for(int i=0;i<n;i++){
		if(A[i]==25){
			a[0]++;
		}
		else if(A[i]==50){
			if(a[0]>0){
				a[0]--;
				a[1]++;
			}
			else{
				check=0;
				break;
			}
		}
		else{
			if(a[1]>0 && a[0]>0){
				a[1]--;
				a[0]--;
			}
			else if(a[1]==0 && a[0]>2){
				a[0]-=3;
			}
			else{
				check=0;
				break;
			}
		}
	}
	if(check) cout<<"YES";
	else cout<<"NO";
	return 0;
}


