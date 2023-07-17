#include <stdio.h>

int main(void) {

  char word[] = { 'H', 'e', 'l', 'l', 'o', '!' };

  int i;
  for ( i = 0; i < 6; i++ )
    printf ("%c",word[i]);
  
  return 0;
}