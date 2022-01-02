#include <stdio.h>

#define THREAD	80
#define MAXLINE  1000

int main(){
	int len;
	char line[MAXLINE];

	while(len = getline(line, MAXLINE) > 0){
		if(len > 80)
			printf("%s\n", line);
	}

	return 0;
}

	
		


