#include <simplecpp>
void H(int n,float x){ 
	if (n==1){ 
		forward(10);left(x);
		forward(10);left(x);
		forward(10);right(x);} 
	else { 
		if(n%2==0){ 
			H(n-1,x);wait(1);
			forward(10);H(n-1,-x);wait(1);
			forward(10);left(x);
			H(n-1,-x);right(x);wait(1);
			forward(10);right(x);
			H(n-1,x);left(x);wait(1);}
		else { 
			H(n-1,-x);wait(1);
			forward(10);right(x);
			H(n-1,x);wait(1); forward(10);
			H(n-1,x);right(x);wait(1);
			forward(10); H(n-1,-x);left(-x);wait(1);} 
		} 
	} 
main_program{ 
int n; 
cin>>n; 
turtleSim(); 
if (n%2==1) left(90); 
H(n,90); wait(5); }


