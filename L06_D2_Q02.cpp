#include <iostream>
using namespace std;
void sort(float &a,float &b,float &c,float &d){
	float x=a;
	float b1=b,c1=c,d1=d;
	for (int i=0;i<3;i++){
		if (x<b1){
			x=b1;
			b1=c1;
			c1=d1;}
		else {
			b1=c1;
			c1=d1;}
	}
	if (x==a) a=x;
	else if(x==b) {b=a;a=x;}
	else if(x==c) {c=a;a=x;}
	else {d=a;a=x;}

	float y=b;
        float c2=c,d2=d;
        for (int i=0;i<2;i++){
                if (y<c2){
                        y=c2;
                        c2=d2;}
                else {
                        c2=d2;}
        }
	if (y==b) b=y;
	else if(y==c) {c=b;b=y;}
        else {d=b;b=y;}
	
	if(c>d) cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	else cout<<a<<" "<<b<<" "<<d<<" "<<c<<endl;}
int main(){
        float a,b,c,d;
        cin>>a>>b>>c>>d;
        sort(a,b,c,d);}

