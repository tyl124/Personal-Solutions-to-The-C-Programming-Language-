/* return n bits which start from the p position */
unsigned getbits(unsigned x, int p, int n){
	return (x >> (p+1-n)) & ~(~0 << n);
}


