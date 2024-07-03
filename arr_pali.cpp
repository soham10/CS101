#include <iostream>
using namespace std;
int main(){
	const int n=5;
	float arr[n],arr1[n];
	for(int u=0;u<n;u++) cin>>arr[u];
	for(int u=0;u<n;u++) arr1[u]=arr[n-1-u];
	bool s;
	for(int i=0;i<n;i++){
		if(arr[i]==arr1[i]) s=false;
		else s=true;}
	if (s==true) cout<<"Not a palindrome"<<endl;
	else cout<<"Palindrome"<<endl;
}
