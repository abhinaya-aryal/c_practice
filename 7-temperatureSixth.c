#include <stdio.h>

// #define line defines a symbolic name or symbolic constant to be a particular string of characters: 
// #define name replacement_text
// the quantities LOWER, UPPER, STEP are symbolic constants, not variables, so they do not appear in declaratons.
// symbolic constant names are conventionally written in uppercase so they can be readily distinguished from lower case variable names
// Notice that there is no semicolon at the end of a #define line
#define LOWER 0 
#define UPPER 300
#define STEP 20

void main(){
	int fahr;

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
