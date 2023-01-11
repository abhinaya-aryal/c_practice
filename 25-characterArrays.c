/* The most common type of array in C is the array of characters.
 * To illustrate the use of character arrays and fuctions to manipulate them, let's write a program that reads a set of text lines and prints the longest.
 * The outline is simple enough.
 * 
 * while (there's another line)
 *   if (it's longer than the previous longest)
 *     save it
 *     save its length
 * print longest line
 *
 * This outline makes it clear that the program divides naturally into pieces.
 * One piece gets a new line, another tests it, another saves it, and the rest controls the process.
 *
 * Since things divide so nicely, it would be well to write them that way too.
 * Accordingly, let us write a separate function my_getline to fetch the next line of input.
 * We will try to make the function useful in other contexts.
 * At the minimum, my_getline has to return a signal about possible end of file; a more useful design would be to return the length of line, or zero if end of file is encountered.
 * Zero is an acceptable end-of-file return because it is never a valid line length.
 * Every text line has at least one character; even a line containing only a newline has length 1.
 *
 * When we find a line that is longer than the previous longest line, it must be saved somewhere. 
 * This suggests a second function, copy, to copy the new line to a safe place.
 *
 * Finally, we need a main program to control the my_getline and copy. 
*/
#include <stdio.h>
#define MAXLINE 1000 // maximum input line size

int my_getline(char line[], int maxline);
void copy(char to[], char from[]);

// print longest input line
int main() {
  int len; // current line length
  int max; // maximum length seen so far
  char line[MAXLINE]; // current input line
  char longest[MAXLINE]; // longest line saved here

  max = 0;

  while ((len = my_getline(line, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }
  if (max > 0) { // there was a line
    printf("\n%s\n", longest);
  }
  return 0;
}

// my_getline: read a line into s, return length
int my_getline(char s[], int lim) {
  int c, i;

  for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

// copy: copy 'from' into 'to'; assume to is big enough
void copy(char to[], char from[]) {
  int i;

  i = 0;

  while ((to[i] = from[i]) != '\0'){
    ++i;
  }
}

/* The function my_getline and copy are declared at the beginning of the program, which we assume is contained in one file.
 * main and my_getline communicate through a pair of arguments and a returned value.
 * In my_getline, the arguments are declared by the line
 *
 * int my_getline(char s[], int lim)
 * 
 * which specifies that the first argument, s is an array, and the second, lim, is an integer.
 * The purpose of supplying the size of an array in a declararion is to set aside storage.
 * The length of the array s is not necessary in my_getline since its size is set in main.
 * my_getline uses return to send a value back to the caller, just as the function power did.
 * This line also declares that my_getline returns an int; since int is the default return type, it could be omitted.
 * Some functions return a useful value; others, like copy, are used only for their effect and return no value.
 * The return type of copy is void, which states explicitly that no value is returned.
 *
 * my_getline puts the character '\0' (the null character, whose value is zero) at the end of the array it is creating, to mark the end of the string of characters.
 * This convention is also used by the C language: when a string constant like
 *
 * "hello\n"
 *
 * appears in a C program, it is stored as an array of characters containing the characters of the string and terminated with a '\0' to mark the end.
 *
 *          h e l l o \n \0
 * 
 * The %s format specification in printf expects the corresponding argument to be a string represented in this form.
 * copy also relies on the fact that its input argument is terminated by '\0', and it copies this character into the output argument.
 * 
 * All of this implies that '\0' is not a part of normal text.
 * 
 * It is worth mentioning in passing that even a program as small as this one presents some sticky design problems.
 * For example, what should main do if it encounters a line which is bigger than its limit?
 * my_getline works safely, in that it stops collecting when the array is full, even if no newline has been seen.
 * By testing the length and the last character returned, main can determine whether the line was too long, and then cope as it wishes. 
 * In the interests of brevity, we have ignored the issue.
 * There is no way for a user of my_getline to know in advance how long an input line might be, so my_getline checks for overflow. 
 * On the other hand, the user of copy already knows (or can find out) how big the strings are, so we have chosen not to add error checking to it.
*/
