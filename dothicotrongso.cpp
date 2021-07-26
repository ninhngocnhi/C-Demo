#include <bits/stdc++.h>
using namespace std;
int main (){
	int n,m;
	cin>>n>>m;
	vector < pair <int ,int > > a[100];
	int x,y,z ;
	while(m--){
		cin>>x>>y>>z;
		a[x].push_back({z,y});
		a[y].push_back({z,x});
	}
	int check[n]={0}, b[n];
	b[0]=0;
	for(int i=1;i<n;i++){
		b[i]=10000000;
	}
	priority_queue <pair<int, int> > pq;
	for(int i=0;i<n;i++){
		pq.push({-b[i],i});
	}
	for(int j=0;j<n;j++){
		int value=-pq.top().first, pos=pq.top().second;
		pq.pop();
		check[pos]=1;
		for(int i=0;i<a[pos].size();i++){
			int u=a[pos][i].first,v=a[pos][i].second;
			if(check[v]==0 && value + u<=b[v]){
				b[v]= value + u;
				pq.push({-b[v],v});
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
