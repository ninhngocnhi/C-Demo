#include <bits/stdc++.h>
using namespace std;
int main (){
	long long a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	long long s=a*b+c*d+e*f;
	long long k=sqrt(s);
	int check=0;
	if(k*k==s){
		long long minn1=min(a,b),maxx1=max(a,b);
		long long minn2=min(c,d),maxx2=max(c,d);
		long long minn3=min(e,f),maxx3=max(e,f);
		if(k==maxx1 && maxx1==maxx2 && maxx2==maxx3 && (minn1+minn2+minn3==k)){
			cout<<k;
			check=1;
		}
		else if(k==maxx1){
			int x=k-minn1;
			if(minn2==x && minn3==x && (maxx2+maxx3==k)){
				cout<<k;
				check=1;
			}
			else if(minn2==x && maxx3==x && (maxx2+minn3==k)){
				cout<<k;
				check=1;
			}
			else if(maxx2==x && minn3==x && (minn2+maxx3==k)){
				cout<<k;
				check=1;
			}
			else if(maxx2==x && maxx3==x && (minn2+minn3==k)){
				cout<<k;
				check=1;
			}
		}
		else if(k==maxx2){
			int x=k-minn2;
			if(minn1==x && minn3==x && (maxx1+maxx3==k)){
				cout<<k;
				check=1;
			}
			else if(minn1==x && maxx3==x && (maxx1+minn3==k)){
				cout<<k;
				check=1;
			}
			else if(maxx1==x && minn3==x && (minn1+maxx3==k)){
				cout<<k;
				check=1;
			}
			else if(maxx1==x && maxx3==x && (minn1+minn3==k)){
				cout<<k;
				check=1;
			}
		}
		else if(k==maxx3){
			int x=k-minn3;
			if(minn1==x && minn2==x && (maxx1+maxx2==k)){
				cout<<k;
				check=1;
			}
			else if(minn1==x && maxx2==x && (maxx1+minn2==k)){
				cout<<k;
				check=1;
			}
			else if(maxx1==x && minn2==x && (minn1+maxx2==k)){
				cout<<k;
				check=1;
			}
			else if(maxx1==x && maxx2==x && (minn1+minn2==k)){
				cout<<k;
				check=1;
			}
		}
	}
	if(check==0){
		cout<<0;
	}
	return 0;
}


