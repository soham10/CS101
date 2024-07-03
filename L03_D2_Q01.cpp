#include <simplecpp>
main_program{
	int N;
	cin>>N;
	int r=0;
	repeat(N){
		repeat(N-r-1){
			cout<<"*";}
		int k=0;
		repeat(r){
			int t=1;
			int j=1;
			repeat(r){
			t*=j;
			j++;}
			int s=1;int a=1;
			 repeat(r-k){
                      		s*=a;
                       		 a++;}
			int l=1;int b=1;
			 repeat(k){
                        	l*=b;
                       	 	b++;}
			cout<<t/(l*s)<<" ";
			k++;
		}
			cout<<1;
			repeat(N-r-1){
                        cout<<"*";}
		cout<<"\n";
		r++;
	}
}



