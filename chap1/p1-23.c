/* delete all the comments in a C file */

#include <stdio.h>

void find_comment(int c);
void in_comment(void);

int main(){
	int c, d;

	while((c = getchar()) != EOF){
		find_comment(c);
	}

	return 0;
}


/* find the start of comment */
void find_comment(int c){
	int d;

	if(c == '/')
		if((d = getchar()) == '*')
			in_comment();
		else if(d == '/'){
			putchar(c);
			find_comment(d);
		} else{
			putchar(c);
			putchar(d);
		}
	else
		putchar(c);
}

/* inside of a valid comment */
void in_comment(void){
	int c, d;

	c = getchar();
	d = getchar();
	while(c != '*' || d != '/'){
		c = d;
		d = getchar();
	}
}








