#include <bits/stdc++.h>
using namespace std;
int main (){
	char A[4][4];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cin >> A[i][j];
		}
	}
	int a[16]={0};
	int stop=0;
	int ans=1000000,check=0;
	while(stop==0){
		char b[4][4];
		int dem=0;
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				b[i][j]=A[i][j];
			}
		}
		for(int i=0;i<16;i++){
			if(a[i]==1){
				dem++;
				if(b[i/4][i-4*(i/4)] == 'w'){
					b[i/4][i-4*(i/4)] = 'b';
				}
				else{
					b[i/4][i-4*(i/4)] = 'w';
				}
				
				if(i-4*(i/4)+1 <4){
					if(b[i/4][i-4*(i/4)+1] == 'w'){
						b[i/4][i-4*(i/4)+1] = 'b';
					}
					else{
						b[i/4][i-4*(i/4)+1] = 'w';
					}
				}
				
				if(i-4*(i/4)-1>=0){
					if(b[i/4][i-4*(i/4)-1] == 'w'){
						b[i/4][i-4*(i/4)-1] = 'b';
					}
					else{
						b[i/4][i-4*(i/4)-1] = 'w';
					}
				}
				
				if(i/4 + 1 <4){
					if(b[i/4 + 1][i-4*(i/4)] == 'w'){
						b[i/4 + 1][i-4*(i/4)] = 'b';
					}
					else{
						b[i/4 + 1][i-4*(i/4)] = 'w';
					}
				}
				
				if(i/4 -1>=0){
					if(b[i/4 - 1][i-4*(i/4)] == 'w'){
						b[i/4 - 1][i-4*(i/4)] = 'b';
					}
					else{
						b[i/4 - 1][i-4*(i/4)] = 'w';
					}
				}
			} 
		}
		char c=b[0][0],checkb=0;
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(b[i][j]!= c){
					checkb=1;
					break;
				}
			}
			if(checkb==1){
				break;
			}
		}
		if(checkb==0){
			ans=min(ans,dem);
			check=1;
		}
		int i=15;
		while(i>=0 && a[i]==1){
			a[i]=0;
			i--;
		}
		if(i==-1){
			stop=1;
		}
		else{
			a[i]=1;
		}
	}
	if(check==0){
		cout<<"Impossible";
	}
	else{
		cout<<ans;
	}
	return 0;
}


