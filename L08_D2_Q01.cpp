#include <iostream>
using namespace std;
int main(){
	int Roll[999];
	int i=0;
	while(true){
		int x;
		cin>>x;
		if(x<0) break;
		Roll[i]=x;
		i++;
	}
	int s;
	cin>>s;
	int k=0;
	for(int j=0;j<i;j++){
		if (s==Roll[j]) k++;
		else continue;}
	if(k!=0) cout<<k<<endl;
	else cout<<-1<<endl;
}

