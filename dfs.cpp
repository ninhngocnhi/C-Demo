#include <bits/stdc++.h>
using namespace std;
int v,e,u;
vector <int> *cor;
bool *chuaxet;
void danhsachke(){
	cor = new vector<int>[v];
	int x,y;
	while(e--){
		cin>>x>>y;
		cor[x].push_back(y);
		cor[y].push_back(x);
	}
}
void re(){
	chuaxet = new bool[v];
	for(int i=0;i<v;i++){
		chuaxet[i]=true;
	}
}
void dfs(int a){
	cout<<a<<" ";
	chuaxet[a]=false;
	for(int i=0;i<cor[a].size();i++){
		if(chuaxet[cor[a][i]]){
			dfs(cor[a][i]);
		}
	}
}
void bfs(int a){
	queue <int> q;
	q.push(a);
	chuaxet[a]=false;
	while(q.size()){
		int x=q.front();
		cout<<x<<" ";
		q.pop();
		for(int i=0;i<cor[x].size();i++){
			if(chuaxet[cor[x][i]]){
				q.push(cor[x][i]);
				chuaxet[cor[x][i]]=false;
			}
		}
	}
}
int main (){
	cin>>v>>e>>u;
	danhsachke();
	re();
	dfs(u);
	re();
	cout<<endl;
	bfs(u);
	return 0;
}


