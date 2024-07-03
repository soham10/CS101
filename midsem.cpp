#include <iostream>
using namespace std;

int fun(int &a){
	a=1;
	return 0;}

int main (){


	//Program 1
/*	int N;
	cin>>N;
	int x=0;
	int y=1;
	while(y<N){
		y *= 2;
		x++;}
	cout<<x<<endl;*/

	// Program 2
	int a=10;
	fun(a);
	cout<<fun(a)-a<<endl;

	return 0;
}
