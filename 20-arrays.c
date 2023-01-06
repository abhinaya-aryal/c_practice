#include <stdio.h>

void main() {
  int c, i, nwhite, nother;

  int ndigit[10];

  for (i = 0; i < 10; ++i)
    ndigit[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9')
      ++ndigit[c-'0'];
    else if (c == ' ' || c == '\n' || c == '\t')
      ++nwhite;
    else {
      ++nother;
    }
  }  
  printf("digits = ");
  for (i = 0; i < 10; ++i)
    printf(" %d", ndigit[i]);
  printf(", white space = %d, other = %d\n", nwhite, nother);
}


/* Let us write a program to count the number of occurrences of each digit, of white space characters (blank, tab, newline), and of all other characters. This is artificial, but it permits us to illustrate several aspects of C in one program. 
 * There are twelve categories of input, so it is convenient to use an array to hold the number of occurrences of each digit, rather than ten individual variables.
 * The declaration 
 *   int ndigit[10];
 * declares ndigit to be an array of 10 integers.
 * Array subscripts always start at zero in C, so the elements are ndigit[0], ndigit[1], ....., ndigit[9].
 * This is reflected in the for loops that initialize and print the array.
 * A subscript can be any integer expression, which includes integer variables like i, and integer constants. 
 * This particular program relies on the properties of the character representation of the digits.
 * if (c >= '0' && c <= 9)
 * determines whether the character in c is a digit.
 * If it is, the numeric value of that digit is c - '0'
 * This works only if '0', '1', ...., '9' have consecutive increasing values.
 * Fortunately. this is true for all character sets. 
 * By definition, chars are just small integers, so char variables and constants are indentical to ints in arithmetic expressions.
 * This is natural and convenient;
 * fot example, c - '0' is an integer expression with a value between 0 and 9 corresponding to the character '0' to '9', stored in c, and is thus a valid subscript for the array ndigit. 
 * The decision as to whether a character is a digit , white space, or something else is made with the sequence
 * The parrern
 * if (condition 1)
 *   statement 1
 * else if (condition 2)
 *   statement 2
 * else 
 *   statement n
 * occurs frequently in programs as a way to express a multi-way decision. 
 * The conditions are evaluated in order from the top until some conditions is satisfied; at that point the corresponding statement part is executed, and the entire construction is finished.
 * If none of the conditions is satisfied, the statement after the final else is executed if it is present.
 * If the final else and statement are omitted, as in the word count program, no action takes place.
 * There can be any number of 
 * else if (condition)
 *   statement
 * groups between the initial if and the final else.
*/
