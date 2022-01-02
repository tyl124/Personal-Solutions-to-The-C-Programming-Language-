/* set n bits start from p in x as n bits in y on it's right */
/* count towards left in x */

#include <stdio.h>

unsigned setbits(int x, int p, int n, int y);

int main(){
	int x, p, n, y;
	int res;

	x = 0xbd;
	y = 0x05;
	n = 2;
	p = 2;
	res = setbits(x, p, n, y);
	printf("%x\n", res);
	return 0;
}


unsigned setbits(int x, int p, int n, int y){
	int mask = ~(~0 << n);
	int a, b, temp, mem, mask2, res;

	b = (mask & y) << (p-1); 	
	
	b = (~0 << (p + n -1)) ^ b;

	temp = (x >> (p + n -1)) << (p + n -1);

	mask2 = ~(~0 << (p+n-1));

	mem =  ~(~0 << (p-1)) & x;
	
	a =  /* all 1 */temp ^ mask2; 
	
	res = (((a & b) >> (p-1)) << (p-1)) ^ mem;
	return res;
}
/*
	(mask & y) = 00 
	x:1001_0110   p:2   n:2
	res should be: x:1001_0000
*/






