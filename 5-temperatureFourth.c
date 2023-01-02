#include <stdio.h>

void main(){
	int fahr;
	for (fahr = 0; fahr <= 300; fahr = fahr + 20){
		printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}}

/* this produces the same answer as previous, but it certainly looks different
 * One major change is the elimination of most of the variable; only fahr remains, and we made it an int.
 * the lower and upper limits and the step size appear only as constants in the for statement,
 * the expression that computes the celsius temperature now appears as the third argument of printf instead of as a separate assignment statement
 * In any context where it is permissible to use the value of a variable of some type, we can use a more complicated expresson of that type. 
 * Since, the second argument of printf must be a floating point value to match the %6.1f, any floating point expression can ocuur there
 */


// the choice between while and for is arbitary, based on which seems clearer.
// the for is usually appropriate for loops in which the initialization and increment are single statements and logically related, since it is more compact than while and it keeps the loop control statements together in one place.
