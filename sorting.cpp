#include <iostream>
using namespace std;

int nmax( float* a,int n){
	float maxi=a[0];
	int i=0;
	while(i<n){
		if(maxi<=a[i]){
			maxi=max(maxi,a[i]);}
		else break;
		i++;}
	return i;
}

int maximum( float* a,int n){
	float maxi=a[0];
        int i=0;
        while(i<n){
		maxi=max(maxi,a[i]);
                i++;}
	return maxi;}
	

int main(){
	const int n=10;
	float a[n];
	for(int j=0;j<n;j++) cin>>a[j];
	
	for(int u=0;u<n-1;u++){
		float maxim=maximum(a,n-u);
		a[nmax(a,n-u)]=a[n-u-1];
		a[n-u-1]=maxim;}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";}
	return 0;
}
	

			
