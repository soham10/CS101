#include <iostream>
using namespace std;

int coeff(int n,int r){
	if (r==0) return 1;
	else if (r==n) return 1;
	else return coeff(n-1,r)+coeff(n-1,r-1);
}
int main(){
	int n,r;
	cin>>n>>r;
	cout<<coeff(n,r)<<endl;
	cout<<(-3%2)<<endl;
	return 0;
}

