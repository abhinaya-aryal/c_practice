#include <stdio.h>
#define IN 1 // inside a word
#define OUT 0 // outside a word

void main() {
  int c, num_lines, num_words, num_characters, state;

  state = OUT;
  num_characters = num_words = 0;
  num_lines = 1;

  while ((c = getchar()) != EOF) {
    ++num_characters;
    if (c == '\n') {
      ++num_lines;
    }
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
    }
    else if (state == OUT) {
      state = IN;
      ++num_words;
    }
  }
  printf("\nTotal no. of lines = %d\nTotal no. of words = %d\nTotal no. of characters = %d\n", num_lines, num_words, num_characters);
}

/* This is a bare-bones version of the UNIX program wc.   
 * Every time the progream encounters the first character of a word, it counts one more word. 
 *   The variable state records whether the program is currently in a word or not; initially it is "not in a word", which is assigned the value OUT.
 *   We prefer the symbolic constants IN and OUT to the literal values 1 and 0 because they make the program more readable. In a program as tiny as this, it makes little difference, but in larger programs, the increase in clarity is well owrth the mocest extra effort to write it this way from the beginning.
 *   The operator || means OR.
 *   One and only one of the two statements associated with an if-else is performed.
 *   If the expression is true, statement 1 is executed; if not, statement 2 inside of else is executed.
 */
