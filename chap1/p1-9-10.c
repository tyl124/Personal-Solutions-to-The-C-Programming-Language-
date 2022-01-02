#include <stdio.h>
#define NONBLANK 'a'

void replace(void){
	int c;
	while((c = getchar()) != EOF){
		if(c == '\t') putchar('\\t');
		else if(c == '\b') putchar('\\b');
		else if(c == '\\') putchar('\\\\');
		putchar(c);
	}
}

main(){
	int c, lastc;
	lastc = NONBLANK;
	
	while((c = getchar()) != EOF){
		if(c != ' ') putchar(c);
		if(c == ' ')
			if(lastc != ' ') putchar(c);
		lastc = c;	
	}
}


