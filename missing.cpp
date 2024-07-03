#include <iostream>
using namespace std;
int main(){
	int N;
	cin>>N;
	int sum=0,sum1=0;
	for(int i=0;i<N;i++){
		int a;
		cin>>a;
		sum +=a;
		sum1 +=(a*a);
	}
	int z,u;
	z=sum-N*(N+1)/2;
	u=sum1-N*(N+1)*(2*N+1)/6;
	cout<<(z+u/z)/2<<" "<<(-z+u/z)/2<<endl;
}
	
