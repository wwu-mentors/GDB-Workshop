#include <stdio.h>

void a(char *word_a);
void b(void);
void c(void);
void d(void);

void a(char *word_a) {
  if (word_a == NULL || word_a[0] != 'A')
    printf("A is for Apple.\n");
  else
    printf("A is for %s\n", word_a);
}

void b(void) {
  printf("B is for Banana.\n");
}

void c(void) {
  printf("C is for Cantaloupe.\n");
}

void d(void) {
  printf("D is for Dragonfruit.\n");
}

int main(void) {
  char *a_word = "apricot";
  b();
  a(a_word);
  c();
  d();
  /* Capitalize the first letter */
  a_word[0] = 'A';
  /* The statement above will segfault */
  a(a_word);
  return 0;
}
