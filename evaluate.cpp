#include <iostream>
using namespace std;

bool check_poly(int A[][3],float x){
	float p1=0,p2=0,s=1,k=1;
	for (int i=0;i<3;i++){
		p1+=A[0][2-i]*s;
		s*=x;
	}
	for (int i=0;i<3;i++){
		p2+=A[1][2-i]*k;
		k*=x;
	}
	if (p1>p2) return true;
	else return false;
}

int main(){
	int A[2][3]={{1,3,6},{1,5,3}};
	float x;
	cin>>x;
	cout<<check_poly(A,x)<<endl;
}
