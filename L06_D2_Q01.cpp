#include <iostream>
using namespace std;

float calc(float &a,char &x,float &b){
	if (x=='+') a= (a+b);
	if (x=='-') a= (a-b);
	if (x=='*') a= (a*b);
	if (x=='/') a= (a/b);
	return a;}

int main(){
	float a;
	cin>>a;
	char y;float z;
	while(y!='='){
		cin>>y;
		if (y=='=') break;
		cin>>z;
		a=calc(a,y,z);}
	cout<<a<<endl;
	return 0;
}

