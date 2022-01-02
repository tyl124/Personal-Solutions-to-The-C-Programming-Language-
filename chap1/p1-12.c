#include <stdio.h>

#define IN	0
#define OUT	1

main(){
	int c, state;
	
	state = OUT;

	while((c = getchar()) != '!'){
		if(c == '\n' || c == '\t' || c == ' '){
			if(state == IN){
				putchar('\n');
				state = OUT;
			}
		}
		else if(state == OUT){
			state = IN;
			putchar(c);
		}
		else putchar(c);
	}
}



