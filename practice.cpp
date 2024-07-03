#include <iostream>
using namespace std;

int min(int* v,int N){
	int s=v[0];
	for (int i=1;i<N;i++){
		if (v[i]<s) s=v[i];
	}
	return s;
}
int index_min(int* v,int N){
	int s=min(v,N);
	int L=0;
	while(true){
		if (v[L]==s) break;
		else L++;}
	return L;
}

int main(){
	int seq[10];
	for (int i=0;i<10;i++){
		cin>>seq[i];
	}
	while(true){
		int k=min(seq,10);
        	int L=index_min(seq,10);
		int a;
		cin>>a;
		if(a==-1) break;
		if (a>k) seq[L]=a;
	}
	for (int i=0;i<10;i++){
		cout<<seq[i]<<endl;
	}
}
