#include <stdio.h>
main(){
	printf("%d\n", EOF);
	int c;
	c = (getchar() != EOF);
	printf("value of experssion:%d\n", c);
}
