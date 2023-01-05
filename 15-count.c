#include <stdio.h>

void main(){
	int c, spaces, tabs, newlines;

	spaces = 0;
	tabs = 0;
	newlines = 0;

	while ((c = getchar()) != EOF){
		if (c == '\n')
			++newlines;
		
		else if (c == '\t')
			++tabs;
		else if (c == ' ')
			++spaces;
	}
	printf("\nNewlines = %d\nTotal lines= %d\nTabs = %d\nSpaces = %d\n", newlines, newlines+1, tabs, spaces);
}
