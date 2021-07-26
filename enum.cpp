#include <bits/stdc++.h>
using namespace std;
class PhanSo{
	private:
		int tu;
		int mau;
	public:
		PhanSo(){
			this->tu = 21;
			this->mau = 2000;
		}
		PhanSo(int tu, int mau){
			this->tu = tu;
			this->mau = mau;
		}
		int gettu(){
			return this->tu;
		}
		int getmau(){
			return this->mau;
		}
		int settu(int tu){
			this->tu = tu;
		}
		int setmau(int mau){
			this->mau = mau;
		}
};
PhanSo operator +  (PhanSo ps1, PhanSo ps2){
	PhanSo ans;
	ans.settu(ps1.gettu()*ps2.getmau() + ps1.getmau()*ps2.gettu());
	ans.setmau(ps1.getmau()*ps2.getmau());
	int x=__gcd(ans.getmau(),ans.gettu());
	ans.settu(ans.gettu()/x);
	ans.setmau(ans.getmau()/x);
	return ans;
}
int main (){
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	PhanSo x(x1,y1), y(x2,y2);
	PhanSo ans= x+y;
	cout<<ans.gettu()<<" "<<ans.getmau();
	return 0;
}



