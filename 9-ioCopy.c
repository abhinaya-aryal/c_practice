#include <stdio.h>

void main(){
	int c;
	// read a character
	// while (character is not end-of-file indicator)
	// output the character just read
	// read a character
	c = getchar();
	while (c != EOF){
		putchar(c);
		c = getchar();
	}
}



// the type char is specifically meant for storing such character data
// but any integer type can be used
// we used int for a subtle but important reason
// the problem is distinguishing the end of input from valid data
// the solution is that getchar return a distinctive value when there is no more input, a value that cannot be confused with any real character
// this value is called EOF "end of file"
// we must declare c to be a type big enough to hold any value that getchar returns.
// we can't use char since c must be big enough to hold EOF in addition to any possible char. Therefore, we use int.
