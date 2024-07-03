#include <iostream>

using namespace std;

void sort(int* v,int N){
	int L=0;
	for (int j=0;j<N;j++){
		if(v[j]<v[N]) L++;}
	int s=v[N];
	for (int j=0;j<N-L;j++){
		v[N-j]=v[N-j-1];}
	v[L]=s;
}
int main(){
	int N;
	cin>>N;
	int arr[N];
	cin>>arr[0];
	for(int i=1;i<N;i++){
		cin>>arr[i];
		sort(arr,i);}	
	for (int j=0;j<N;j++){
		cout<<arr[j]<<" ";}
	return 0;
}
