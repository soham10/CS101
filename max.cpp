#include <iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int x=a;
	for(int i=0;i<3;i++){
		if(x<b){
			x=b;
			b=c;
			c=d;}
		else {
			b=c;
			c=d;}}
	cout<<x<<endl;
	cout<<a<<" "<<b<<" "<<c<<" "<<d;}	
