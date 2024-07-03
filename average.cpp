#include <simplecpp>
main_program{
	float y=0,N=0;int x;
	while(true){
		cin>>x;
		if(x>100) continue;
		if (x<0) break;
		y=y+x;
		N++;}
	cout<<(y/N)<<endl;
}
