#include <simplecpp>
main_program{
	int a,r,n;
	cout<<"Enter a,r,n: ";
	cin>>a>>r>>n;
	repeat(n){
		cout<<a<<" ";
		a*=r;
	}
}
	
