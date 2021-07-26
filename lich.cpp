#include <bits/stdc++.h>
using namespace std;
int main (){
	int date[]={31,28,31,30,31,30,31,31,30,31,30,31};
	int n;
	cin>>n;
	int a[n];
	int d=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==29){
			a[i]=28;
			d++;
		}
	}
	int check=0;
	for(int i=0;i<12;i++){
		if(a[0]==date[i]){
			int b=i,j=0;
			check=1;
			while(j<n){
				if(a[j]== date[b]){
					j++;
					b++;
					if(b==12){
						b=0;
					}
				}
				else{
					check=0;
					break;
				}
			}
			if(check==1){
				break;
			}
		}
		if(check==1){
			break;
		}
	}
	if(check==1){
		if(d<2){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
	}
	else{
		cout<<"NO";
	}
	return 0;
}

