#include <iostream>
using namespace std;

int poly(int* v,int N,int x){
	int a=1,sum=0;
	for (int i=0;i<=N;i++){
		sum+=v[i]*a;
		a*=x;
	}
	return sum;
}

int main(){
	int P[]={5,3,1};
	int Q[]={9,5,3};
	int x;
	cin>>x;
	int y=poly(Q,2,x);
	int composite=poly(P,2,y);
	cout<<composite<<endl;
}
