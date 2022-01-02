/* do not use '&&' or '||' to rewrite this program */

/*
   To be rewrite:
   for (i = 0; i<lim-1 && (c = getchar()) != '\n' && c != EOF; ++i)
	   s[i] = c;
*/               

i = 0;
while(i < lim -1){
	if((c = getchar()) != '\n')
		if(c != EOF){
			s[i] = c;
			++i;
		}


enum loop {NO, YES};
enum loop okloop = YES;
i = 0;
while(okloop == YES){
	if( i >= lim - 1)		/* outside of a valid range ? */
		okloop = NO;
	else if ((c = getchar()) == '\n')
		okloop = NO;
	else if (c == EOF)		/* End of a file ?			  */
		okloop = NO;
	else {
		s[i] = c;
		++i;
	}
}

