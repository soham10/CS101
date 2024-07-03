#include <iostream>
using namespace std;
void intersection(int* v, int* u, int* com, int a, int b, int &k) {
    bool found;
    for(int i = 0; i < a; i++) {
        found = false;
        for(int j = 0; j < b; j++) {
            if(v[i] == u[j]) {
                found = true;
                break; // Exit loop once a match is found
            }
        }
        if(found) {
            // Check if the common element already exists in com
            bool duplicate = false;
            for(int m = 0; m < k; m++) {
                if(com[m] == v[i]) {
                    duplicate = true;
                    break;
                }
            }
            if (!duplicate) {
                com[k++] = v[i];
            }
        }
    }
}


void combine(int* U, int* v, int* u, int* com, int a, int b, int k) {
    int index = 0;
    for(int i = 0; i < a; i++) {
        U[index++] = v[i];
    }
    for(int i = 0; i < b; i++) {
        U[index++] = u[i];
    }
    for(int i = 0; i < k; i++) {
        U[index++] = com[i];
    }
}
int main() {
    int a[999], b[999];
    int i = 0;
    while(true) {
        int x;
        cin >> x;
        if(x == -1 || i >= 999) break;
        else {
            a[i] = x;
            i++;
        }
    }
    int j = 0;
    while(true) {
        int x;
        cin >> x;
        if(x == -1 || j >= 999) break;
        else {
            b[j] = x;
            j++;
        }
    }
    int com[999];
    int k = 0;
    intersection(a, b, com, i, j, k);
    int U[999];
    combine(U, a, b, com, i, j, k);
    for(int p = 0; p < i + j + k; p++) {
        cout << U[p] << " ";
    }
    return 0;
}

