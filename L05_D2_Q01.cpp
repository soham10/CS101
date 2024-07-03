#include <simplecpp>
main_program{
	double n;
	cin>>n;
	if(n==0) cout<<0;
	int i=0,y=0;
	while(int(n/pow(2,i))!=0){
		y++;
		i++;}
	while(y>0){
		int sum=int(n/pow(2,y-1))-int(n/pow(2,y))*pow(2,1);
		cout<<sum;
		y--;}
}


