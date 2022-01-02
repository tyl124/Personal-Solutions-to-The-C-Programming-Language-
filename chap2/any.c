#include <stdio.h>

int my_any(char s1[], char s2[]);

int main(){
	char s1[] = "I love you.";
	char s2[] = " ";
	int res;
	res = my_any(s1, s2);
	printf("%d\n", res);

	return 0;
}

/* return the position of any char in s2 which has showed in s1 */
int my_any(char s1[], char s2[]){
	int target, c;
	int i, j;
	
	i = 0;
	while(s2[i] != '\0'){
		target = s2[i];
		j = 0;
		while(s1[j] != '\0'){
			if(s1[j] == target)
				return j;
			++j;
		}
		++i;
	}

	return -1;
}

