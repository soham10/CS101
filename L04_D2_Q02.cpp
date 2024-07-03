#include <simplecpp>
main_program{
	int d,m,y;// Date,Month and Year
	cin>>d>>m>>y;
	if((m==1 or m==3 or m==5 or m==7 or m==8 or m==10 or m==12) and (d>=1 and d<=31) and (y>=1400 and y<=3000)){
		cout<<"valid"<<endl;}
	else if((m==4 or m==6 or m==9 or m==11) and (d>=1 and d<=30) and (y>=1400 and y<=3000)){
		cout<<"valid"<<endl;}
	else if(m==2 and d>=1 and d<=28 and y>=1400 and y<=3000 and y%4!=0){
		cout<<"valid"<<endl;}
	else if(m==2 and d>=1 and d<=29 and y>=1400 and y<=3000 and y%4==0){
		if(y%400==100 or y%400==200 or y%400==300){
			cout<<"invalid"<<endl;}
		else{
			cout<<"valid"<<endl;}
	}
	else{
		cout<<"invalid"<<endl;}
}
