#include <stdio.h>
#include <string.h>

void words(char *good, char *bad) {
  size_t length;
  
  length = strlen(good);
  printf("Good is %zu characters long - \"%s\"\n", length, good);

  length = strlen(bad);
  printf("Bad is %zu characters long - \"%s\"\n", length, bad);

  good[1] = 0;
}

int main(void) {
  char *word1 = "Hello";
  char word2[5] = {'H', 'e', 'l', 'l', 'o'};

  words(word1, word2);
  return 0;
}
