#include <stdio.h>

#define  MAXCOL  10		/* max column of input */
#define  TABINC  8      /* tab increment size  */

char line[MAXCOL];

int exptab(int pos);
int findblank(int pos);
int newpos(int pos);
void printl(int pos);

int main(){
	int c, pos;

	pos = 0;
	while ((c = getchar()) != '!') {
		line[pos] = c;
		if (c == '\t')
			pos = exptab(pos);
		else if (c == '\n') {
			printl(pos);
			pos = 0;
		} else if (++pos >= MAXCOL) {
			pos = findblank(pos);
			printl(pos);
			pos = newpos(pos);
		}
	}

	return 0;
}

/* printl: print line until pos column */
void printl(int pos){
	int i;
	for(i = 0; i < pos; ++i) 
		putchar(line[i]);
	if(pos > 0)
		putchar('\n');
}

/* exptab: expand tab into blanks */
int exptab(int pos){
	line[pos] = ' ';
	for(++pos; pos < MAXCOL && pos % TABINC != 0; ++pos)
		line[pos] = ' ';
	if(pos < MAXCOL)
		return pos;
	else {
		printl(pos);
		return 0;
	}
}

/* findblank: find blank's position */
int findblank(int pos){
	while(pos > 0 && line[pos] != ' ')
		--pos;
	if(pos == 0)
		return MAXCOL;
	else
		return pos+1;
}

/* newpos: rearrange line with new position */
int newpos(int pos){
	int i, j;

	if(pos <= 0 || pos >= MAXCOL)
		return 0;
	else {
		i = 0;
		for(j = pos; j < MAXCOL; ++j) {
			line[i] = line[j];
			++i;
		}
		return i;
	}
}











































