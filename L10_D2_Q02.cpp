#include <simplecpp>
void words(char* line,int n,int &s){
	if (line[n]=='.') return;
	else{
        if (((line[n]>='A' and line[n]<='Z') or (line[n]>='a' and line[n]<='z')) and !((line[n+1]>='A' and line[n+1]<='Z') or (line[n+1]>='a' and line[n+1]<='z'))) s=s+1;
	n++;
	words(line,n,s);}}


int main(){
	char line[1000];
	cin.getline(line,1000);
	int count=0;
	words(line,0,count);
	cout<<count<<endl;
}
