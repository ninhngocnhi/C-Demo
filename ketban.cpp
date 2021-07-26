#include <bits/stdc++.h>
using namespace std;
int v,e;
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
	chuaxet = new bool[v+1];
	for(int i=1;i<v+1;i++){
		chuaxet[i]=true;
	}
}
int BFS(int a){
	int dem=1;
	queue <int> qu;
	qu.push(a);
	chuaxet[a]=false;
	while(qu.size()!= 0){
		int x=qu.front();
		qu.pop();
		for(int i=0;i<cor[x].size();i++){
			if(chuaxet[cor[x][i]]){
				dem++;
				qu.push(cor[x][i]);
				chuaxet[cor[x][i]]=false;
			}
		}
	}
	return dem;
}
int main (){
	int t;
	cin>>t;
	while(t--){
		cin>>v>>e;
		danhsachke();
		int ans=0;
		re();
		for(int i=1;i<v+1;i++){
			ans=max(ans,BFS(i));
		}
		cout<<ans<<endl;
	}
	return 0;
}

