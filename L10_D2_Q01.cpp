#include <simplecpp>
using namespace std;
int main(){
	char line[1000];
	cin.getline(line,1000);
	int s=0;
	for(int i=0;i<1000;i++){
		if (line[i]=='.') break;
		if (((line[i]>='A' and line[i]<='Z') or (line[i]>='a' and line[i]<='z')) and !((line[i+1]>='A' and line[i+1]<='Z') or (line[i+1]>='a' and line[i+1]<='z'))) s++;
		else continue;}
	cout<<s<<endl;
}

