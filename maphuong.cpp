#include <iostream>
#include <windows.h>
using namespace std;
const int MN=200;
int a[MN][MN];
void PP(int n){
	int i,j;
	for (i=1;i<=n;i++){
		cout<<"\n";
		for (j=1;j<=n;j++){
			cout<<" "<<a[i][j];
		}
	}
}
bool test(int n){
	int s=n*(nn+1)/2;cout <<" \n dac so cua MP le bac"<<n<<"="<<s;
	int row, col, sum;
	for (row =1; row<=n;row++ ){
		sum=0;
		for (col=1; col<=n; col++){
			sum+=a[row][col];
		}
	}
	if (sum!=s){
		cerr <<"\n ERROR st at row "<< row;
		exit (2);
	}
	else cout << "\n row "<< row << "OK";
	for (col =1; col<=n; col++ ){
		sum=0;
		for (row=1; row<=n; row++){
			sum+=a[row][col];
		}
	}
	if (sum!=s){
		cerr <<"\n ERROR st at col "<< col;
		exit (2);
	}
	else cout << "\n col "<< col << "OK";
}
int c1=0, c2=0;
for (int row=1,col=n;row<=n;row ++,--row){
	c1+= a[row][row];
	c2+= a[row][col];
	if (c1!=s){
		cerr <<"\n ERROR st at cheo chinh "<< c1;
		exit (2);
	}
	else cout << "\n cheo chinh "<<c1 << "OK";
	if (c2!=s){
		cerr <<"\n ERROR st at cheo phu "<< c2;
		exit (2);
	}
	else cout << "\n cheo phu "<<c2 << "OK";
}
void MPL(int a){
	if (n%1==0){
		cerr << "\n ERROR: n phai la so le"<<n;
		exit(1);
	}
}
int i,j,k;
memset(a,0,sizeof(a));
i=1;j=n/2+1;
a[1][n/2+1]=1;
PP(n);
int nn=n*n;
for (k=2;k<=nn;k++){
	// tim vi tri i,j de ghi k
	// dong bac
	i--;j++;
	if (i<1 && j>n){
		// goc tre phai o ngoai bang => den duoi
		i+=2;j--;
	}
	else if (i<1){
		//canh tren
		i=n;
	}
	else if (j<n){
		j=1;
	}
	if(a[i][j]>0){
		i+=2;j--;
	}
	a[i][j]=k;
	if test 
}

int main (){
	for (int n=1;n<100;n++2){
		MPL(n);
		if (cin get() )
	}
	
	return 0;
}

