#include <stdio.h>
#include <string.h>

int main()
{
  char a[1000], b[1000];

  // First, Accept input from console
  // Nothing should be printed out for an input
  gets(a);
  gets(b);

  // Then process
  strcat(a, " ");
  strcat(a, b);

  // Lastly, print only the result to console
  printf("%s\n", a);

  return 0;
}
