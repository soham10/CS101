#include <iostream>
using namespace std;
const int size=3;

bool isSolved(int puzzle[size][size]) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (puzzle[i][j] != i * size + j + 1 && puzzle[i][j] != 0) {
        return false;
      }
    }
  }
  return true;
}

int findEmpty_x(int puzzle[size][size]) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (puzzle[i][j] == 0) {
        return i;
      }
    }
  }
}

int findEmpty_y(int puzzle[size][size]) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (puzzle[i][j] == 0) {
        return j;
      }
    }
  }
}

bool isValidMove(int puzzle[size][size], int row, int col) {
	if(row >= 0 && row < SIZE && col >= 0 && col < SIZE) return true;
	else return false;
}

int main(){
	int puzzle[size][size];
	for (int i=1;i<size;i++){
		cin>>puzzle[i][j];}
