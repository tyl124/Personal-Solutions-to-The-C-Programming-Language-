#include <stdio.h>

#define MAXLINE		1000

/* GetLine: read a line into s, return length */ 
  int GetLine(char s[],int lim)
  {
      int c, i;
      for (i=0; i < lim-1 && (c=getchar())!='!'; ++i) s[i] = c;
      if (c == '\n') {                                                                                               
          s[i] = c;
          ++i; 
      }
      s[i] = '\0';
	  return i; 
 }

/* ReMove: ReMove all blank or tab figure of a line */
int ReMove(char s[], int old_len){
	int new_len, flag, i;
	
	flag = 1;
	new_len = old_len;	

	if(old_len <= 0 || s == NULL){
		printf("Something wrong with the input!\n");
		return -1;
	}

	if(s[old_len - 1] == ' ' || s[old_len - 1] == '\t'){
		s[old_len - 1] = '\0';
		new_len = old_len - 1;
	}
	
	for(i = 0; i < new_len; i++){
		if(s[i] !=  ' '){
			flag = 0;
			break;
		}
	}
	
	if(flag == 1){ 
		s[0] = '\0';
		new_len = 0;
	}

	return new_len;
}

int main(){
	int len;
	char line[MAXLINE];

	len = GetLine(line, MAXLINE);
	printf("before ReMove:%d, %s\n", len, line);
	len = ReMove(line, len);
	printf("after ReMove:%d, %s\n", len, line);

	return 0;
}































