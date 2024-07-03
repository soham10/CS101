#include <simplecpp>
main_program{
	int N;
	cin>>N;
	int r=0;
	repeat(N){
		repeat(r){
			cout<<0<<" ";
		}
		cout<<1<<" ";
		repeat(N-r-1){
			cout<<0<<" ";
		}
		cout<<"\n";
		r++;
	}
}
		
