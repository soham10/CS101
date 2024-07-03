#include <simplecpp>
main_program{
	int N;
	cout<<"Enter Number: ";
	cin>>N;
	for(int i=1;i<=N;i++){
		for(int k=1;k<i;k++){
			cout<<k<<" ";}
		cout<<i<<endl;
	}
}
