#include <simplecpp>
main_program{
	int N,y=0;
	cin>>N;
	while (int(N/pow(10,y))!=0){y++;}
	int sum=0;
	while(y>0){
		sum+=pow((int(N/pow(10,y-1))-int(N/pow(10,y))*10),3);
		y--;}
	if(sum==N) cout<<"TRUE"<<endl;
	else cout<<"FALSE"<<endl;
	}
		
