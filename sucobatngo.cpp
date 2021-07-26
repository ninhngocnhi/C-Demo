#include <bits/stdc++.h>
using namespace std;
const int maxN=1e5+5;
const int inf=1e9;
const int mod=1e9+7;
typedef pair<int,int> ii;
int n;
string a,b;
char fileIn[50];
int main(){
	ios_base::sync_with_stdio(0); cin.tie(NULL);

        cin>>n>>a>>b;
        int d=0;
        for(int i=0;i<(n%2+n/2);i++){
            map<char, int> m;
            m[a[i]]++;
            if(i!=n-i-1) m[a[n-i-1]]++;
            m[b[i]]++;
            if(i!=n-i-1) m[b[n-i-1]]++;
            if(m.size()==4) d+=2;
            else if(m.size()==3) d+=1+(a[i]==a[n-i-1]);
            else if(m.size()==2) d+=(m[a[i]]!=2);
        }
        cout<<d<<endl;
	return 0;
}
