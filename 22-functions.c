// so far we have used only functions like printf, getchar, and putchar that have been provided for us
// Now, it's time to write our own function.

#include <stdio.h>

int power(int m, int n);

int main ()
{
  int i;
  for (i = 0; i < 10; ++i) {
    printf("%d %d %d\n", i, power(2, i), power(-3, i));
  }
  return 0;
}

int power(int base, int n) {
  int i, p;

  p = 1;

  for (i = 1; i <= n; ++i) {
    p = p * base;
  }
  return p;
}


/* Function definitions can appear in any order, and in one source file or several, although no function can be split between files.
 * If the source program appears in several files, we may have to say more to compile and load it than if it all appears in one, but that is an operating system matter,  not a language attribute.
 * For the moment, we will assume that both functions are in the same file, so whatever we may have learned about running C programs will still work.
 * The function power is called twice by main, in the line with printf function.
 * Each call passes two arguments to power, which each time returns an integer to be formatted and printed.
 * In an expression, power(2, i) is an integer just as 2 and i are.
 * The first line of power function itself declares the parameter types and names, and the type of the result that the function returns.
 * The names used by power for its parameters are local to power, and are not visible to any other functions: other routines can use the same names without conflict.
 * This is also true of the variables i and p: the i in power is unrelated to the i in main.
 * We will generally use 'parameter' for a variable named in the parenthesized list in a function definition, and argument for the value used in a call of the function.
 * The value that power computes is returned to main by the return statement.
 * Any expression may follow return:
 * A function need no return a value; a return statement with no expression causes control, but no useful value, to be returned to the caller, as does "falling off the end" of a function by reaching the terminating right brace. 
 * And the calling function can ignore a value returned by a function.
 * You may have noticed that there is a return statement at the end of main.
 * Since main is a function like any other, it may return a value to its caller, which is in effect the environment in which the program executed. 
 * Typically return value of zero implies normal termination; non-zero values signal unusual or erroneous termination conditions.
 * The declaration of power function before main says that power is a function that expects two int arguments and returns as int. 
 * This declaration, which is called a function prototype, has to agree with the definition and uses of power.
 * It is an error if the definition of a function or any uses of it do not agree with prototype.
 * Parameters names need not agree
 * Indeed, parameter names are optional in a function prototype, so for the prototype we could have written
 * int power(int, int)
 */
