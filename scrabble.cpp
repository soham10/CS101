#include <iostream>
using namespace std;

int main(){
	char board[15][15],letters[7],dict[10000][15];
	for (int i=0;i<15;i++){
		for (int j=0;j<15;j++){
			cin>>board[i][j];}
	}
	for (int i=0;i<7;i++) cin>>letters[i];
	
	int n=0;
	while(true){
		char x;
		cin>>x;
		if (x=='*') break;
		int a=0;
		while(true){
			if (x==' ') break;
			dict[n][a]=x;
			a++;}
		n++;}

	for (int i=0;i<15;i++){
		char k[15];
		if (board[i][0]='-'){
			int s=0;
			for (int j=1;j<15;j++){
				if (board[i][j-1]=='-' && board[i][j+1]=='-') continue;
				else if (board[i][j]=='-') continue;
				else if (board[i][j]!='-' and board[i][j+1]!='-'){
					k[s]=board[i][j];
					s++;}
				else k[s+1]=board[i][j];}
			for (int i=0;i<n;i++){
				int b=0;
				while(true){
					if (b>s+1) break;
					else if (k[b]!=dict[i][b]) break;
					else b++;}
				if (b==s+1) dict[i]="0";}
		}
		else{
			 int s=1;
			 k[0]=board[i][0];
                        for (int j=1;j<15;j++){
                                if (board[i][j-1]=='-' && board[i][j+1]=='-') continue;
                                else if (board[i][j]=='-') continue;
                                else if (board[i][j]!='-' and board[i][j+1]!='-'){
                                        k[s]=board[i][j];
                                        s++;}
                                else k[s+1]=board[i][j];}
                        for (int i=0;i<n;i++){
                                int b=0;
                                while(true){
                                        if (b>s+1) break;
                                        else if (k[b]!=dict[i][b]) break;
                                        else b++;}
                                if (b==s+1) dict[i]="0";}
                }
	}
	for (int j=0;j<15;j++){
                char k[15];
                if (board[0][j]='-'){
                        int s=0;
                        for (int i=1;i<15;i++){
                                if (board[i-1][j]=='-' && board[i+1][j]=='-') continue;
                                else if (board[i][j]=='-') continue;
                                else if (board[i][j]!='-' and board[i+1][j]!='-'){
                                        k[s]=board[i][j];
                                        s++;}
                                else k[s+1]=board[i][j];}
                        for (int i=0;i<n;i++){
                                int b=0;
                                while(true){
                                        if (b>s+1) break;
                                        else if (k[b]!=dict[i][b]) break;
                                        else b++;}
                                if (b==s+1) dict[i]="0";}
                }
                else{
                         int s=1;
                         k[0]=board[0][j];
                        for (int i=1;i<15;j++){
                                if (board[i-1][j]=='-' && board[i+1][j]=='-') continue;
                                else if (board[i][j]=='-') continue;
                                else if (board[i][j]!='-' and board[i+1][j]!='-'){
                                        k[s]=board[i][j];
                                        s++;}
                                else k[s+1]=board[i][j];}
                        for (int i=0;i<n;i++){
                                int b=0;
                                while(true){
                                        if (b>s+1) break;
                                        else if (k[b]!=dict[i][b]) break;
                                        else b++;}
                                if (b==s+1) dict[i]="0";}
                }
        }}





		
	


