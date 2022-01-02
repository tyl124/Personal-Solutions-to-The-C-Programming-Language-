/* rewrite lower using conditional expression */

/* old school */
int lower(int c){
	if(c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else return c;
}

/* new version */
int my_lower(int c){
	res = (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c;
	return res;
}

