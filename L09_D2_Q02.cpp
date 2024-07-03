#include <iostream>
#include <math.h>
#include <ctime>

using namespace std;

float radius(float &x,float &y){
	float r=sqrt(x*x+y*y);
	return r;
}

int main(){
	srand(time(NULL));
	const int N=10000;
	float x[N],y[N];
	for (int i=0;i<N;i++){
                x[i]= -1.0+(2.0*rand())/(1.0+RAND_MAX);}
	for (int i=0;i<N;i++){
                y[i]= -1.0+(2.0*rand())/(1.0+RAND_MAX);}
	int s=0;
	for (int i=0;i<N;i++){
		if (radius(x[i],y[i])<= 1.0){
			cout<<"("<<x[i]<<","<<y[i]<<")"<<" is inside the circle."<<endl;
			s++;}
		else  cout<<"("<<x[i]<<","<<y[i]<<")"<<" is outside the circle."<<endl;}
	cout<<s/10000.0<<endl;

	return 0;}
