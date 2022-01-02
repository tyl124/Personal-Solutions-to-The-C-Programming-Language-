/*
  rewrite the function binsearch:
  only one time test in while loop is accepted
*/

#include <stdio.h>

int binsearch(int x, int v[], int n);

int main(){

	return 0;
}

int binsearch(int x, int v[], int n){
	int low, high, mid;

	low = 0;
	high = n - 1;
	mid = (low + high) / 2;

	if(x == v[mid]) return mid;		/* test in advance */
	while(low <= high && x != v[mid]){
		if(x < v[mid])
			high = mid - 1;
		else
			low = mid + 1;
		mid = (low + high) / 2;
	}
	return -1;
}




