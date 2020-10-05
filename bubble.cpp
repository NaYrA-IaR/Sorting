#include <bits/stdc++.h>

using namespace std;

void swap(int *x,int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void bubbleSort(int A[], int n){
	int i,j;
	int flag = 0;
	for( i=0; i<n-1; i++){
		for (j=0 ; j<n-1-i; j++){
			if (A[j] > A[j+1]){
				swap(&A[j],&A[j+1]);
				flag = 1;
			}			
		}
		if (flag == 0)
			break;
	}
}

int main(){	
	int A[100000] , n=100000;
	time_t end , start;
	for (int i=0;i<n;i++)
		A[i] = n-i;
	time (&start);
	bubbleSort(A,n);
	time (&end);
	cout << endl << end-start << "seconds were taken to do bubble sort"<<endl;
	return 0;
}