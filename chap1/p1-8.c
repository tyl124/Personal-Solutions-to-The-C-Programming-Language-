#include <stdio.h>
main(){
	int NofSpace = 0, NofTab = 0, NofNext = 0;
	int c;

	while((c = getchar()) != EOF){
		if(c == ' ')	NofSpace++;
		else if(c == '\t')	NofTab++;
		else NofNext++;

		printf("%d %d %d\n", NofSpace, NofTab, NofNext);
	}
}

