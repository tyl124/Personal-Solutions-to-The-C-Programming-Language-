#include <stdio.h>

int main(){
	int c, nb, pos;

	nb = 4;			/* number of blanks need */
	pos = 1;		/* position of current char */
	while((c = getchar()) != '!'){
		if(c == '\t'){
			while(nb > 0){
				putchar(' ');
				++pos;
				--nb;
			}
		} else if(c == '\n'){
			putchar(c);
			pos = 1;
		} else{
			putchar(c);
			++pos;
		}
	}
	return 0;
}
			
