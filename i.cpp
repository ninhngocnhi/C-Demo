#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin>>n;
	long long a[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	a[n]=1000000009;
	sort(a,a+n);
	int pos,check2=0, check3=0,c=0;
	long long sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
		if(a[i] !=a[i+1]){
			pos=i+1;
			int x=i+1;
			if((x==2 && a[0]==0) || x>2){
				c=1;
			}
			else if(x==2 && a[0] !=0){
				check2++;
			}
			break;
		}
	}
	if(pos == n && a[0]==0){
		c=1;
	}
	if(c==0){
		for(int i=pos;i<n;i++){
			sum+=a[i];
			int check=i;
			for(int j=i+1;j<n+1;j++){
				sum +=a[j];
				if(a[j]!=a[i]){
					sum -=a[j];
					int x=j-i;
					check=j-1;
					if(x==2){
						if(a[i-1]==a[i]-1){
							c=1;
						}
						else{
							check2++;
							if(check2==2){
								c=1;
							}
						}
					}
					else if(x>2){
						c=1;
					}
					break;
				}
				if(c==1){
					break;
				}
			}
			i=check;
		}
		if(c==1){
			cout<<"Haley";
		}
		else{
			long long ans=sum-(n*(n-1))/2;
			if(ans%2==0){
				cout<<"Haley";
			}
			else{
				cout<<"Leviz";
			}
		}
	}
	else{
		cout<<"Haley";
	}
	return 0;
}


