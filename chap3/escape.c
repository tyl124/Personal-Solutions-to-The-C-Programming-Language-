/* copy string 't' to string 's' */

#include <stdio.h>

void escape(char s[], char t[]);

int main(){
	char s[10] = "aaaaabbbbb";
	char t[] = "		";
	int i;
	
	i = 0;
	escape(s, t);
	while(i < 10){
		putchar(s[i]);
		++i;
	}
	return 0;
}

void escape(char s[], char t[]){
	int i, j;

	i = 0;
	j = 0;
	while(t[i] != '\0'){
		switch(t[i]){
			case '\n':
				s[j++] = '\\';
				s[j++] = 'n';
				++i;
				break;
			case '\t':
				s[j++] = '\\';
				s[j++] = 't';
				++i;
				break;
			default:
				s[j++] = t[i++];
		}
	}
	return;
}
