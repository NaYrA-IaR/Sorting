#include <bits/stdc++.h>

using namespace std;

void swap(int *x , int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void selectionSort(int A[] ,int n)
{
	int i ,j ,k;
	for (i=0 ; i<n-1;i++)
	{
		k = i;
		for (j=i;j<n;j++)
		{
			if (A[k] > A[j])
				k=j;
		}
		swap (&A[k],&A[i]);
	}
}

int main(){
	int A[100000] , n=100000;
	time_t end , start;
	for (int i=0;i<n;i++)
		A[i] = n-i;
	time (&start);
	selectionSort(A,n);
	time (&end);
	cout << endl << end-start << "seconds were taken for selection sort" << endl;
	return 0;
}