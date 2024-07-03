#include <iostream>
using namespace std;
int main(){
	int N;
	cout<<"Enter number of elements: ";
	cin>>N;
	int array[N];
	float sum=0;
	float var=0;
	for(int i=0;i<N;i++){
		cout<<"Enter array's "<<i+1<<"th element: ";
		cin>>array[i];
		sum+=array[i];
		var+=(array[i])*(array[i]);}
	cout<<"Average is "<<sum/N<<endl;
	cout<<"Variance is "<<var/N-((sum/N)*(sum/N))<<endl;
	cout<<array<<endl;// Prints the memory address of the array,just like pointers
	return 0;
}
/* Use cat command to extract data from a .txt file
 * cat xyz.txt|./a.out or ./a.out < cat xyz.txt
 * To store output in a .txt file, ./a.out > cat abc.txt*/


