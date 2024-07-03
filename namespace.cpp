#include <iostream>

namespace mySpace{
	void even(int n){
		if (n%2==0) std::cout<<"Even";
	}
	void odd(int n){
		if (n%2==1) std::cout<<"Odd";
	}
}
int main(){
	mySpace::even(10);
}
