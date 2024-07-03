#include <iostream>
#include <cstring>
using namespace std;

class Book{
public:
	string Name;
	int Pages;
	string author;
	
	Book(){
		Name="God";
		Pages=901;
		author="Somebody";
	}
	Book(string aName,int a,string b){
		Name=aName;
		Pages=a;
		author=b;
	}
};
int main(){
	Book Physics("Mechanics",1000,"Soham");
	Book goat;
	cout<<Physics.Pages<<endl;
	cout<<Physics.author<<endl;
	cout<<goat.Pages<<endl;

return 0;
}
