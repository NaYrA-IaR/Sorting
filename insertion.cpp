#include <bits/stdc++.h>

using namespace std;

void insertionSort(int A[] , int n){
	int i , j;
	for (i=1; i<n; i++){
		j = i-1;
		int x = A[i];
		while(j > -1 && A[j] > x){
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = x;
	}
}

int main(){
	int A[100000] , n=100000;
	time_t end , start;
	for (int i=0;i<n;i++)
		A[i] = n-i;
	time (&start);
	insertionSort(A,n);
	time (&end);
	cout << endl << end-start << "seconds were taken to execute insertion sort"<<endl;
	return 0;
}