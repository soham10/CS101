#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
switch (n%13) {
case 0:
cout << "King of "; break;
case 12:
cout << "Queen of "; break;
case 11:
cout << "Jack of "; break;
default:
cout << (n%13) << " of ";
}
switch ((n%13!=0)?(n/13):((n/13)-1)) {
case 0:
cout << "Spades"<<endl; break;
case 1:
cout << "Clubs"<<endl; break;
case 2:
cout << "Hearts"<<endl; break;
case 3:
cout << "Diamonds"<<endl;
}
return 0;
}
