#include <stdio.h>

void main(){
	// int means variable listed are integers
	// float means floating point i.e. numbers that may have a fractional part 
 	int fahr, celsius;
	int lower, upper, step;
	lower=0;
	upper=300;
	step=20;

	fahr=lower;
	
	printf("  F\t  C\n");
	// the while loop operates as follows:
	// the condition in parenthesis is tested
	// if true, body of loop is executed
	// then condition is retested
	// if true, body is executed again
	// when false, the loop ends
	while (fahr<= upper){
		/* the reason for multiplying by 5 and then dividing by 9 instead of just multiplying by 5/9 is that integer division truncates.
		* any fractional part is discarded. Since 5 and 9 are integers, 5/9 would be truncated to zero and so all the celsius temperatur would be reported as zero */
		celsius=5*(fahr-32)/9;
		// here %3d will right justify the output in their field
		printf("%3d\t%3d\n", fahr, celsius);
		fahr=fahr+step;
	}
}

// Here, the result are not accurate,
// 0F is actually about -17.8C not -17 
// to get more accurate answer, we should use floating-point arithmetic instead of integer. This requires som changes in this program.
// Refer to second version of it.


// C provides several other basic data types besides int and float including:
// char character-a single byte
// short short integer
// long long integer
// double double-precision floating point
