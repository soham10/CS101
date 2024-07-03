#include <simplecpp>
main_program{
	int N;
	cin>>N;
	cout<<"Primes factors of N are: \n";
	int i=2;
	while (i<N){
		int k=2;
		bool s=true;
		while(k<i){
			if (i%k==0) s=false;
			k++;}
		if (s and N%i==0) cout<<i<<" ";
		i++;}
}


