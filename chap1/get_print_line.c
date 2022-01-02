#include <stdio.h>
#define MAXLINE 1000	/* the max length of one line */

int GetLine(void);
void copy(void);

/* print the longest line -- special verse */
main(){
	int len;
	extern int current_max;
	extern char longest[];
	
	current_max = 0;
	while((len = Getline()) > 0) 
		if(len > current_max){
			current_max = len;
			copy();
		}
	}
	if(current_max > 0)
		printf("%s\n", longest);
	
	return 0;
}

/* GetLine(): read one line and return the length */
int GetLine(void){
	int c, i;
	extern char line[];

	for(i = 0; i < MAXLINE-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	if(c != '\n'){
	    line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;	
}

/* copy : special verse*/
void copy(void){
	int i;
	extern char line[], longest[];

	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}











