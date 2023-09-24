/* returns the rightmost pos of t in s */

int strrindex(char s[], char t[]){
	int i, j, k, pos;
	pos = -1;

	for(i = 0; s[i] != '\0'; i++){
		for(j = i, k = 0; s[j] == t[k] && t[k] != '\0'; j++, k++)
		;
		if(k > 0 && t[k] == '\0')
		/* every time find a pos, record it */
			pos = i;
	}

	return pos;
}
