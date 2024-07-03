#include <simplecpp>
main_program{
	int N;	//No. of students
	cin>>N;
	repeat(N){
		float marks;
		cin>>marks;
		if(marks<=100 and marks>=90){
		       cout<<"AA ";}
		else if(marks<90 and marks>=80){
			cout<<"AB ";}
		else if(marks<80 and marks>=70){
			cout<<"BB ";}
		else if(marks<70 and marks>=60){
			cout<<"BC ";}
		else if(marks<60 and marks>=40){
			cout<<"CC ";}
		else if(marks<40 and marks>=0){
			cout<<"F ";}
		else{
			cout<<"INVALID ";}		
	}
}


