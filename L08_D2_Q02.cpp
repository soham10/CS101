#include <iostream>
using namespace std;
int main(){
	int N;
	cin>>N;
	int A[N];
	for(int i=0;i<N;i++){
		cin>>A[i];}
	int j=0;
	while(true){
		if (A[j]<A[j+1]) j++;
		else break;}
	cout<<j<<endl;
}

