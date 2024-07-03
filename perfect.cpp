#include <simplecpp>
main_program{
	int n;
	cout<<"Enter Number to be checked :";
	cin>>n;
	int sum=0,i=1;
	while(i<n){
		if (n%i==0){
			sum+=i;}
		i++;}
	if(sum==n) cout<<"perfect"<<endl;
	else cout<<"not perfect"<<endl;
}

