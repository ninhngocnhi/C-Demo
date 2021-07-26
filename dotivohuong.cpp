#include <bits/stdc++.h>
using namespace std;
int v,e;
vector <int> *cor;
void danhsachke(){
	cor = new vector<int>[v];
	for(int i=0;i<e;i++){
		int u,v;
		cin>>u>>v;
		cor[u].push_back(v);
		cor[v].push_back(u);
	}
	for(int i=0;i<v;i++){
		sort(cor[i].begin(),cor[i].end());
	}
	for(int i=0;i<v;i++){
		cout<<i;
		for(int j=0;j<cor[i].size();j++){
			cout<<"->"<<cor[i][j];
		}
		cout<<endl;
	}
}
int main (){
	int t;
	cin>>t;
	while(t--){
		cin>>v>>e;
		danhsachke();
	}	return 0;
}


