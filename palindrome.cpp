#include <simplecpp>
main_program{
        int x;
        cin>>x;
	while(true){
		int n=x;
        	int i=0,y=0;
        	while(int(n/pow(10,i))!=0){
                	y++;
                	i++;}
		double sum=0;
        	while(y>=1){
                	sum+=((n%10)*pow(10,y-1));
			n=n/10;
                	y--;}
		if(sum==x) break;
		x++;
}
	cout<<x<<endl;
}
