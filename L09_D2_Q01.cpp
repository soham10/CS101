#include <iostream>
using namespace std;

int main(){
	int N;
	cin>>N;
	int matrix[40][40];
	for (int i=0;i<N;i++){
		for (int j=0;j<N;j++){
			cin>>matrix[i][j];}
	}
	for (int i=0;i<N;i++){
		if (i%2==0){
			for (int j=0;j<N;j++) cout<<matrix[i][j]<<" ";}
		else {
			for (int j=0;j<N;j++) cout<<matrix[i][N-1-j]<<" ";}
	}
	return 0;
}
