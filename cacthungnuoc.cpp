#include <bits/stdc++.h>
using namespace std;
vector <int> *cor;
bool *chuaxet;
void re(){
	chuaxet = new bool[10005];
	for(int i=1;i<10005;i++){
		chuaxet[i]=true;
	}
}
void BFS(int a){
	queue <int> qu;
	qu.push(a);
	chuaxet[a]=false;
	while(qu.size()!= 0){
		int x=qu.front();
		qu.pop();
		for(int i=0;i<cor[x].size();i++){
			if(chuaxet[cor[x][i]]){
				qu.push(cor[x][i]);
				chuaxet[cor[x][i]]=false;
			}
		}
	}
}
int main (){
	int t;
	cin>>t;
	cor = new vector<int>[10005];
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		if(c==1){
			cor[a].push_back(b);
			cor[b].push_back(a);
		}
		else{
			re();
			BFS(a);
			if(chuaxet[b]) cout<<"0\n";
			else cout<<"1\n";
		}
	}
	return 0;
}


