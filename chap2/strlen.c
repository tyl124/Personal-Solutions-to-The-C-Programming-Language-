/* return the length of S */
#include <stdio.h>

main(){
	/* test enum values */
	enum boolean { NO, YES };
	printf("The value of NO: %d\n", NO);
	
	return 0;
}

int StrLen(char s[]){
	int i;
	
	i = 0;
	while (s[i] != '\0')
		++i;
	return i;
}




