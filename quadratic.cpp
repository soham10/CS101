#include <simplecpp>
main_program{
	float a,b,c;
	cout<<"Enter a,b and c: ";
	cin>>a>>b>>c;
	if (a==0 and b!=0) cout<<"Root is: "<<(-c/b)<<endl;
	else if (a!=0 and (b*b-4*a*c)>=0){
		cout<<"Roots are: ";
		cout<<((-b+sqrt(b*b-4*a*c))/(2*a))<<" ";
		cout<<((-b-sqrt(b*b-4*a*c))/(2*a))<<endl;}
	else if (a!=0 and (b*b-4*a*c)<0){
		 cout<<"Roots are: ";
		 cout<<(-b/2*a)<<"+"<<(sqrt(4*a*c-b*b)/2*a)<<"i"<<" ";
		 cout<<(-b/2*a)<<"-"<<(sqrt(4*a*c-b*b)/2*a)<<"i"<<" "<<endl;}
	else cout<<"Invalid Input"<<endl;
}
