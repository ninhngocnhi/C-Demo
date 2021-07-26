#include <bits/stdc++.h>
using namespace std;
class sophuc{
	private:
		int thuc;
		int ao;
	public:
		sophuc(){
			this->thuc = 1;
			this->ao = 1;
		}
		sophuc(int a,int b){
			this->thuc = a;
			this->ao = b;
		}
		int getthuc(){
			return this->thuc;
		}
		int getao(){
			return this->ao;
		}
		int setthuc(int thuc){
			this->thuc = thuc;
		}
		int setao(int ao){
			this->ao =ao;
		}
};
sophuc operator + (sophuc fi,sophuc se){
	sophuc ans;
	ans.setthuc(fi.getthuc()+se.getthuc());
	ans.setao(fi.getao()+se.getao());
	return ans;
}
sophuc operator - (sophuc fi,sophuc se){
	sophuc ans;
	ans.setthuc(fi.getthuc()-se.getthuc());
	ans.setao(fi.getao()-se.getao());
	return ans;
}
sophuc operator * (sophuc fi,sophuc se){
	sophuc ans;
	ans.setthuc(fi.getthuc()*se.getthuc()-fi.getao()*se.getao());
	ans.setao(fi.getthuc()*se.getao()+fi.getao()*se.getthuc());
	return ans;
}
//sophuc operator / (sophuc fi,sophuc se){
//	sophuc ans;
//	ans.setthuc(fi.getthuc()-se.getthuc());
//	ans.setao(fi.getao()-se.getao());
//	return ans;
//}
int main (){
	int m,n,p,q;
	cin>>m>>n>>p>>q;
	sophuc A(m,n), B(p,q);
	sophuc cong= A+B;
	sophuc tru=A-B;
	sophuc nhan=A*B;
//	sophuc chia=A/B;
	cout<<cong.getthuc()<<" "<<cong.getao()<<"i\n";
	cout<<tru.getthuc()<<" "<<tru.getao()<<"i\n";
	cout<<nhan.getthuc()<<" "<<nhan.getao()<<"i";
	return 0;
}


