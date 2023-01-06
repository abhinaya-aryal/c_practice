#include <stdio.h>

void  main() {
  int c;

  while ((c = getchar()) != EOF) {
    if (c != ' ' && c != '\t') {
      putchar(c);
    }
    ;
  }
}
