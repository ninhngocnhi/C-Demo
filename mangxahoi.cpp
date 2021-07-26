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
	for(int i=1;i<v+1;i++){
		sort(cor[i].begin(),cor[i].end());
	}
}
int main (){
	int t;
	cin>>t;
	while(t--){
		cin>>v>>e;
		danhsachke();
		int check=1;
		for(int i=1;i<v+1;i++){
			while(cor[i].size()!=0 ){
				if(cor[cor[i][0]].size()==1){
					cor[i].erase(cor[i].begin()+0);
					cor[cor[i][0]].erase(cor[cor[i][0]].begin()+0);
				}
				else{
					if(cor[i][1]!=cor[cor[i][0]][2]){
						check=0;
						break;
					}
					else{
						cor[i].erase(cor[i].begin(),cor[i].begin()+2);
						cor[cor[i][0]].erase(cor[cor[i][0]].begin(),cor[cor[i][0]].begin()+2);
						cor[cor[i][1]].erase(cor[cor[i][1]].begin(),cor[cor[i][1]].begin()+2);
					}
				}
			}
			if(check==0){
				break;
			}
		}
		if(check) cout<<"YES\n";
		else cout<<"NO\n";
		cout<<endl;
	}
	return 0;
}

