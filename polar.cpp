#include <iostream>
#include <math.h>
using namespace std;

void CtoP(float &x,float &y){
	float r,theta;
	r = sqrt(x*x + y*y);
	theta = atan2(y, x)*180/acos(-1.0);
	cout<<r<<" "<<theta<<endl;}

int main(){
	float x,y;
	cin>>x>>y;
	CtoP(x,y);}
