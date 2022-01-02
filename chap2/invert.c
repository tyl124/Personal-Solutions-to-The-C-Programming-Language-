/* invert n bits from p(position) in x */

#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

int main(){
	unsigned x = 0x4b;
	int p = 2;
	int n = 2;
	int res;

	res = invert(x, p , n);
	printf("0x%x\n", res);

	return 0;
}

/*
trick : 0 ^ 1 = 1
		1 ^ 1 = 0		->		any ^ 1 = ~any

		1 ^ 0 = 1
		0 ^ 0 = 0		->		any ^ 0 = any
*/

unsigned invert(unsigned x, int p, int n){
	int temp = ~(~0 << (p + n -1));
	temp = (temp >> (p - 1)) << (p - 1);
	return x ^ temp;
}



