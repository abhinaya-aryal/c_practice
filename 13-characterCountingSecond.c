#include <stdio.h>

void main(){
	double nc;

	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);
}


// printf uses %f for both float and double.
// %.0f suppresses printing of the decimal point and the faraction part, which is zero
// the body of this for loop is empty, because all of the work is done in the test and increment parts.
// but the grammatical rules of C require that a for statement have a  body.
// The isolated semicolon calle a null statement, is there to satisfy the requirement.
