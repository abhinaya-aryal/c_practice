#include <stdio.h>
#define IN 1 // for determining character as inside of a word
#define OUT 0 // for determining character as outside of a word

void main() {
  int c, word;
  int word_count = 0; // number of words in input
  int count = 0; // temporary count variable for counting length of each word
  int word_lengths[20]; // array for storing the frequencies of length of words
  int longest_digit_word = 0;
  word = OUT; // setting that at first we are not counting it as a word

  for (int i = 0; i < 20; ++i) {
    word_lengths[i] = 0; // setting all values of the Array as 0
  }
   
  while ((c = getchar()) != EOF) {
   if (c == ' ' || c == '\n' || c == '\t') {
     word = OUT;
     ++word_lengths[count]; // submitting the length of word as soon as any of the space, tab and newline is encountered
     count = 0; // reinitializing the temporary variable count to count the no. of characters in next word
   } 
   else if (word == OUT) {
     word = IN; // setting the word as IN when there are other character than mentioned above
     ++word_count; // increasing the number of words.
     ++count; // as soon as we entered the word, we starts to increment count
   }
   else {
     ++count;  // this condition increases the count if none of the above condition matches that means when the word is IN.
   }
  } 
  ++word_lengths[count]; // submitting the length of word as soon as we are out of a input so that the length of last word also counts.

  // let us find the length of longest words.
  for (int i = 0; i < 20; ++i) {
    if (word_lengths[i] > 0) {
      longest_digit_word = i;
    }
  }

  printf("\nTotal no. of words = %d\n", word_count);
  printf("The longest length of word = %d \n", longest_digit_word);

  // let us draw the histogram...
  for (int i = longest_digit_word; i >=1; --i) {
    for (int row = 0; row < 3; ++row) {
      if (row == 1) {
        printf("Length-%2d  ", i);
      }else{
      for (int column = 0; column < 11; ++column) {
        printf(" ");
      }
      }
      if (row == 1) {
        for (int j = 0; j < word_lengths[i]; ++j){
          printf("*");
        }
        printf(" (%d)", word_lengths[i]);
      }
      else{
      for (int j = 0; j < word_lengths[i]; ++j){
        printf("*");
      }
      }
      printf("\n");
    }
    printf("\n\n");
  }
}
// In this program . (fullstop) is also counted in a length of a word.
