#include <iostream>
#include <cassert>
using namespace std;

int W(int n){
	if (n==0) return 1;
	else if (n==1) return 1;
	else if (n==2) return 1;
	else return W(n-1)+W(n-2)+W(n-3);
}

int w(int n){
	assert(n>=0);
	int a=1,b=1,c=1;
	for(int i=3;i<=n;i++){
		int d;
		d=a+b+c;
		a=b;
		b=c;
		c=d;}

	if (n==0) return a;
        else if (n==1) return b;
        else if (n==2) return b;
        else return c;
}

int main(){
	int n;
	cin>>n;
	cout<<W(n)<<" "<<w(n)<<endl;
}
