#include <iostream>
using namespace std;

void concat(char A[100],char B[100]){
	int i=0,j=0;
	while(A[i]!='\0'){
		i++;
	}
	A[i++]=' ';
	while(B[j]!=0){
		A[i]=B[j];
		i++;
		j++;
	}
}
int main(){
	char A[100]="hello";
	char B[100]="world";
	concat(A,B);
	cout<<A<<endl;
}
