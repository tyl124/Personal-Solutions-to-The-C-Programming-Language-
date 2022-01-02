#include <stdio.h>

void reverse(char s[], int len){
	if(len <= 0) return;
	
	int i;
	for(i = len - 1; i >= 0; i--)
		putchar(s[i]);
	putchar('\n');

	return;
}


