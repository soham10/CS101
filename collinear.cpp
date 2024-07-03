#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Point{
	float x,y;
};


float area(float x1,float x2,float x3,float y1,float y2,float y3){
	float a=(x1-x2)*(y2-y3)-(x2-x3)*(y1-y2);
	return a;
}
int main(){
	int N;
	cin>>N;
	Point p[N];
	for(int i=0;i<N;i++){
		cin>>p[i].x;
		cin>>p[i].y;
	}
	srand(time(0));
	int i= 1+rand()%N;
	int j= 1+rand()%N;
	int k= 1+rand()%N;
	float s=area(p[i].x,p[j].x,p[k].x,p[i].y,p[j].y,p[k].y);
	cout<<"("<<p[i].x<<","<<p[i].y<<")"<<endl;
	cout<<"("<<p[j].x<<","<<p[j].y<<")"<<endl;
	cout<<"("<<p[k].x<<","<<p[k].y<<")"<<endl;
	if (s==0) cout<<"Collinear"<<endl;
	else cout<<"Not Collinear"<<endl;


	return 0;
}
	
