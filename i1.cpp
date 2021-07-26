#include <bits/stdc++.h>
using namespace std;
int main (){
	int n,m,h,w;
	cin>>n>>m>>h>>w;
	int a[n][m];
	int minn=n*m+1;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	
	for(int i=0;i<n-h+1;i++){
		int b[h*w]={0};
		int k=0;
		for(int x=i;x<i+h;x++){
			for(int y=0;y<i+w-1;y++){
				b[k]=a[x][y];
				k++;
			}
		}
		int c[k];
		for(int z=0;z<k;z++){
			c[z]=b[z];
		}
		sort(c,c+k);
		minn=min(minn,c[(k-1)/2]);
		for(int j=1;j<m-w+1;j++){
			int n1=i,n2=j+w-1,hang=h,bien=0;
			for(int z=0;z<k;z++){
				c[z]=b[z];
			}
			while(hang>0){
				c[bien]=a[n1][n2];
				bien+=w;
				n1++;
				hang--;
			}
			sort(c,c+k);
			minn=min(minn,c[(k-1)/2]);
		}
	}
	cout<<minn;
	return 0;
}

