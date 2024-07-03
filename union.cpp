#include <iostream>
using namespace std;

void intersection(int* v,int* u,int* com,int &a,int &b){
	for(int c=0;c<a;c++){
		if(v[c]==u[c]){
			com[b]=v[c];
			b++;
			for(int d=c;d<a-1;d++){
				v[d]=v[d+1];
			}
		}
	}
}

void combine(int* U,int* v,int* u,int* com,int &a,int &b,int &k){
	for(int c=0;c<a-k;c++){
                U[c]=v[c];}
        for(int c=a-k;c<b+a-k;c++){
                U[c]=u[c];}
        for(int c=b+a-k;c<a+b;c++){
                U[c]=com[c];}
}				
int main(){
	int a[999],b[999];
	int i=0;
	while(true){
		int x;
		cin>>x;
		if(x==-1) break;
		else{
		       	a[i]=x;
			i++;
		}
	}
	int j=0;
	while(true){
                int x;
                cin>>x;
                if(x==-1) break;
                else{
			b[j]=x;
			j++;
                }
	}
	int com[999];
	int k=0;
	if(i<j) intersection(a,b,com,i,k);
	else intersection(b,a,com,j,k);
	int U[999];
	if(i<j) combine(U,a,b,com,i,j,k);
	else combine(U,b,a,com,j,i,k);
	for(int p=0;p<i+j;p++){
		cout<<U[p]<<" ";}
}

			
