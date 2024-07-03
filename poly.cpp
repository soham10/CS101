#include <simplecpp>
main_program{
	int n,x;
	cout<<"Enter n: ";
	cin>>n;
	cout<<"Enter x: ";
	cin>>x;
	int sum=0,y=1;
	for (int i=0;i<=n;i++){
		int a;
		cout<<"Enter a"<<i<<": ";
		cin>>a;
		sum+= (a*y);
		y=y*x;}
	cout<<"Value of polynomial: "<<sum<<endl;
}
