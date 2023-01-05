#include <stdio.h>

void main(){
  int c, space;
  space = 0;

  while ((c = getchar()) != EOF){
    if (c == ' '){
      ++space;
    }
    else if (c != ' '){
      space = 0;
    }
    if (space <= 1){
     putchar(c);
   }  
  }
}
