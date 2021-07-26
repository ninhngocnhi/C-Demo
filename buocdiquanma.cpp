#include <bits/stdc++.h>
using namespace std;
int v,e,u;
vector <int> *cor;
bool *chuaxet;
int a[8]={-1,-1,1,1,-2,-2,2,2};
int b[8]={2,-2,2,-2,1,-1,1,-1};
int matrix[8][8];
void re(){
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			matrix[i][j]=0;
		}
	}
}
void BFS(int a1,int a2){
	queue <int> q1;
	queue <int> q2;
	q1.push(a1),q2.push(a2);
	matrix[a1][a2]=1;
	while(q1.size()!=0){
		int x=q1.front();
		int y=q2.front();
		q1.pop(),q2.pop();
		for(int i=0;i<8;i++){
			if((0<= x+a[i] && x+a[i]<8) && (0<= y+b[i] && y+b[i]<8)){
				if(matrix[x+a[i]][y+b[i]]==0){
					q1.push(x+a[i]),q2.push(y+b[i]);
					matrix[x+a[i]][y+b[i]]=matrix[x][y]+1;;
				}
			}
		}
	}
}
int main (){
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		int a1=s1[0]-'a',a2=s1[1]-'1';
		int b1=s2[0]-'a',b2=s2[1]-'1';
		re();
		BFS(a1,a2);
		cout<<matrix[b1][b2]-1<<endl;
	}
	return 0;
}
