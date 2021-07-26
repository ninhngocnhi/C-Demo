#include <bits/stdc++.h>
using namespace std;
int v,e,u;
vector <int> *cor;
bool *chuaxet;
void danhsachke(){
	cor = new vector<int>[v+1];
	for(int i=0;i<e;i++){
		int x,y;
		cin>>x>>y;
		cor[x].push_back(y);
		cor[y].push_back(x);
	}
}
void re(){
	chuaxet = new bool[v];
	for(int i=1;i<v+1;i++){
		chuaxet[i]=true;
	}
}
void BFS(int a){
	queue <int> qu;
	cout<<a<<" ";
	qu.push(a);
	chuaxet[a]=false;
	while(qu.size()!= 0){
		int x=qu.front();
		qu.pop();
		for(int i=0;i<cor[x].size();i++){
			if(chuaxet[cor[x][i]]){
				cout<<cor[x][i]<<" ";
				qu.push(cor[x][i]);
				chuaxet[cor[x][i]]=false;
			}
		}
	}
	cout<<endl;
}
void DFS(int a){
	stack <int> st;
	st.push(a);
	chuaxet[a]=false;
	while(st.size()!= 0){
		int x=st.top();
		st.pop();
		for(int i=0;i<cor[x].size();i++){
			if(chuaxet[cor[x][i]]){
				st.push(cor[x][i]);
				chuaxet[cor[x][i]]=false;
			}
		}
	}
}
int main (){
	int t;
	cin>>t;
	while(t--){
		cin>>v>>e>>u;
		danhsachke();
		re();
		BFS(u);
	}
	return 0;
}

