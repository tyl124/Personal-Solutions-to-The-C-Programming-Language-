/* print the max and min number of all datas */

#include <stdio.h>
#include <limits.h>

void pdirect(void);

main(){
	
	/* Using the standard head file */
	printf("%u\n",USHRT_MAX);
	
	/* print dircetly */
	pdirect();
	return 0;

}

/* print the values directly */
void pdirect(void){
	printf("signed char min = %d\n", -(char)((unsigned char) ~0 >> 1));
	printf("signed char min = %d\n", (char)((unsigned char) ~0 >> 1));
	printf("unsigned int max = %u\n", UINT_MAX); 
}




