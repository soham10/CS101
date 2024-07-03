#include <iostream>
using namespace std;

void mergesort(int *a,int n){
	if (n==1) return;
	else if (n==2){
		if(a[0]>a[1]){
			int r=a[0];
			a[0]=a[1];
			a[1]=r;}
		else return;
	}
	else{
		int u[n/2],v[n-n/2];
		for (int i=0;i<n/2;i++){
			u[i]=a[i];
			v[i]=a[n/2+i];
		}
		mergesort(u,n/2);
		mergesort(v,n-n/2);
		int j=0;
		for(int i=0;i<n/2;i++){
			if (u[n/2-1]>v[0]){
			while(true){
				if (u[i]>v[j]) {a[i+j]=v[j];j++;}
				else {
					a[i+j]=u[i];
					break;}
	}
				if (u[n/2-1]<v[n-n/2-1]) a[n-1]=v[n-n/2-1];
                		else a[n-1]=u[n/2-1];}
			else{
				 for (int j=0;j<n/2;j++){
					 a[j]=u[j];}
				 for (int j=n/2;j<n;j++){
					 a[j]=v[j-n/2];}}
}
}}
// Merges two subarrays of a[].
// First subarray is a[l..m].
// Second subarray is a[m+1..r].
void merge(int a[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Create temporary arrays
    int L[n1], R[n2];

    // Copy data to temporary arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = a[l + i];
    for (j = 0; j < n2; j++)
        R[j] = a[m + 1 + j];

    // Merge the temporary arrays back into a[l..r]
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }
}

// Main function to perform merge sort
void mergeSort(int a[], int l, int r) {
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for large l and r
        int m = l + (r - l) / 2;

        // Sort first and second halves
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);

        // Merge the sorted halves
        merge(a, l, m, r);
    }
}

int main(){
	int n=10;
	int a[]={4,1,8,6,34,56,43,2,65,100};
	mergesort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";}
	cout<<"\n";
}

