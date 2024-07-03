#include <iostream>
using namespace std;
int main() {
    int y= -1,z= -1;
    while (true) {
        int x;
        cout << "Enter a number: ";
        cin >> x;
        if (x == -1) {
            break;
        }
        if (x > y) {
            z = y;
            y = x;}
       	else if (x > z and x < y) {
            z = x;
        }
    }
    if (z <= -1) {
        cout << "No second highest number" <<endl;}
    else {
        cout << "The second highest number is: " << z <<endl;
    }
    return 0;
}
