#include <stdio.h>

void main(){
	float fahr, celsius;
	int upper, lower, step;

	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;
	
	while (fahr <= upper){
		/* if an arithmetic operator has integer operands, an integer operation is performed.
		 * If an arithmetic operator has one floating-point operand and one integer operand, the integer will be converted to floating point before the operation is done
		 * If we had written fahr-32 the 32 would be automatically converted to floating point
		 */
		celsius = (5.0/9.0) * (fahr-32.0);
		/* the printf conversion specification %3.0f says that a floating point number is to be printed at least three characters wide, with no decimal point and no fraction digits
		 * %6.1f describes another number that is to be printed at least six characters wide, with 1 digit after the decimal point.

		*/
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
