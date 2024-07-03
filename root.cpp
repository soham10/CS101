#include <simplecpp>
main_program{
	double x1,x2;
	cin>>x1>>x2;
	if (x2>x1){
		if (x1<1 and x2>1 and x2<2) cout<<"1.000"<<endl;
		else if (x1>1 and x1<2 and x2>2 and x2<3) cout<<"2.000"<<endl;
		else if (x1>2 and x1<3 and x2>3) cout<<"3.000"<<endl;
		else cout<<"no root"<<endl;}
	else cout<<"Invalid Input"<<endl;
}
