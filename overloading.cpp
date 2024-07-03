#include <iostream>
#include <cstring>
using namespace std;

class Complex{
	int real,imag;
	public:
		Complex(){
			real=0;
			imag=0;
		}
		Complex(int r,int i){
			real=r;
			imag=i;
		}
		Complex operator*(Complex const& a){
			Complex sum;
			sum.real=real+a.real;
			sum.imag=imag+a.imag;
			return sum;
		}
		void print(){
			cout<<real<<"+i"<<imag<<endl;
		}
};
int main(){
	Complex a(10,12),b(2,3),c;
	c=a*b;
	c.print();
}
