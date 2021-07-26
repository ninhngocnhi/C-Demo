	int t = 10;
	while(t--){
		int y=sinh(1,2030);
		int m=sinh(1,12);
		int d;
		if(((y%400==0 )||(y%4==0 && y%100!=0)) && m==2){
			d==sinh(1,29);
		}
		else d=sinh(1,ngay[m]);
		cout<<"ngày "<<d<<",tháng "<<m<<",nam "<<y<<endl;
	}