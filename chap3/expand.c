/* expand string like a-c to abc, and this function should also adjust to form of string like these: a-b-c, a-z0-9, -a-z */

#include <stdio.h>

void expand(char s1[], char s2[]);

int main(){
	char s1[] = "------a-c-z1-3";
	char s2[100];
	expand(s1, s2);
	
	int i = 0;
	while(s2[i] != '\0'){
		putchar(s2[i]);
		++i;
	}
	putchar('\n');

	return 0;
}

void expand(char s1[], char s2[]){
	int startC, endC, startN = -1, endN = -1, len;

	int i = 0;
	while(s1[i] != '\0')
		++i;
	len = i;

/* get start and end position of chars */
	for(i = 0; i < len; ++i){
		if(s1[i] >= 'a' && s1[i] <= 'z'){
			startC = i;
			break;
		}							
	}
	i = startC + 1;
	while(s1[i] != '\0'){
		if(s1[i] >= 'a' && s1[i] <= 'z')
			endC = i;
		++i;
	}
/* same with the A and Z, leave them to write... */
	
/* get start and end position of numbers */
	for(i = 0; i < len; ++i){
		if(s1[i] >= '0' && s1[i] <= '9'){
			startN = i;
			break;
		}
	}
	i = startN + 1;
	while(s1[i] != '\0'){
		if(s1[i] >= '0' && s1[i] <= '9')
			endN = i;
		++i;
	}

//	printf("%d %d %d %d", startC, endC, startN, endN);



/* default to consider startC < startN */
	int next, times, j = 0;
	if(startC != 0){
		for(i = 0; i < startC; ++i){
			s2[j] = s1[i];
			++j;
		}
	}

	//printf("%d", j);	

	times = s1[endC] - s1[startC];
	printf("%d\n",times);
	next = s1[startC];
	for(i = 0; i <= times; ++i){
		s2[j] = next;
		++next;
		++j;	
	}

	times = s1[endN] - s1[startN];
	next = s1[startN];
	for(i = 0; i <= times; ++i){
		s2[j] = next;
		++next;
		++j;
	}
	s2[j] = '\0';
}







