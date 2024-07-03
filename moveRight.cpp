#include <iostream>
using namespace std;
void moveRight( int &a,int &b,int &c,int &d){
	cout<<d<<" "<<a<<" "<<b<<" "<<c<<endl;}

int gcd(int &a,int &b){
	int x;
	if (a%b==0) x=b;
	else{
		while(a%b!=0){
			x=a%b;
			a=b;
			b=x;}}
	return x;
}

int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	moveRight(a,b,c,d);
	
	int y=(a>b)?(a+b):(a*b);
	cout<<y<<endl;
	cout<<gcd(c,d)<<endl;

	return 0;}
