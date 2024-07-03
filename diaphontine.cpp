#include <iostream>
using namespace std;

int gcd(int a,int b){
	if (a%b==0) return b;
	else return gcd(a,a%b);
}

int sol_x(int a,int b,int c){
	int i=0;
	while(true){
		if((c-a*i)%b==0) break;
		else i++;}
	return i;
}
int sol_y(int a,int b,int c){
	return (c-a*sol_x(a,b,c))/b;}

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if (c%gcd(a,b)!=0) cout<<"No Solution"<<endl;
	else cout<<"("<<sol_x(a,b,c)<<","<<sol_y(a,b,c)<<")"<<endl;
	return 0;
}
