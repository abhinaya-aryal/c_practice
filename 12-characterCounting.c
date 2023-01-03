#include <stdio.h>

void main(){
	long nc;

	nc = 0;
	while (getchar() != EOF)
		++nc;
		printf("%1d\n", nc);
}

// the character counting program accumulates its count in a long varaiable instead of an int.
// long integers are at least 32 bits.
// The conversion specification %1d tells printf that the corresponding argument is a long integer
// It may be possible to cope with even bigger numbers by usin a double (double precision float).
// We will also use a for statement instead of a while, to illustrate another way to write the loop.
