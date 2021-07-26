#include <bits/stdc++.h>
using namespace std;
int main (){
	string s;
	cin>>s;
	int len=s.size();
	int dem=0;
	for(int i=0;i<len;i++){
		if(s[i]=='4' || s[i]=='7'){
			dem++;
		}
	}
	int check=0;
	if(dem==0){
		cout<<"NO";
	}
	else{
		while(dem>0){
			int t=dem%10;
			if(t==4 || t==7){
				dem/=10;
			}
			else{
				check=1;
				break;
			}
		}
		if(check==1){
			cout<<"NO";
		}
		else{
			cout<<"YES";
		}
	}
	return 0;
}


