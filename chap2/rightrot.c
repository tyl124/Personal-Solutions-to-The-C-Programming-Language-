/* move n bits in right of x to the start of itself */

#include <stdio.h>

unsigned rightrot(unsigned int x, int n);

int main(){
	unsigned x = 0x4b;
	int n = 2;
	unsigned res = rightrot(x, n);

	printf("0x%u\n", res);

	return 0;
}

unsigned rightrot(unsigned int x, int n){
	return (x >> n) + (x << (32 - n));
}
