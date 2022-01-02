#include <stdio.h>

void first_squeeze(char s[], int c);
void second_squeeze(char s1[], char s2[]);

int main(){
	char s1[] = "i love you all the time";
	char s2[] = "the time";
	second_squeeze(s1, s2);

	int i = 0;
	while(s1[i] != '\0'){
		putchar(s1[i]);
		++i;
	}
	putchar('\n');
	return 0;
}

/* function squeeze: delete char c from string s */
/* version 1 */
void first_squeeze(char s[], int c){
	int i, j;

	for(i = j = 0; s[i] != '\0'; i++)
		if(s[i] != c)
			s[j++] = s[i];
	s[j] = '\0';
}

/* function sqeeze: delete any char in s1 which is matched with s2 */
void second_squeeze(char s1[], char s2 []){
	int i, j, k, c;
	
	k = 0;
	while(s2[k] != '\0'){
		c = s2[k];	
		for(i = j = 0; s1[i] != '\0'; i++){
			if(s1[i] != c)
				s1[j++] = s1[i];
		}
		++k;
	}
	s1[j] = '\0';
}

