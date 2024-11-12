/*

Given two strings, a and b, return the result of putting them together in the
order abba, e.g. "Hi" and "Bye" returns "HiByeByeHi".

Input Format

two strings s1 and s2

Constraints

non-empty strings

Output Format

return expected string

*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  
  char a[100], b[100];

  scanf("%99s %99s", a, b);

  char c[400];

  strcpy(c, a);
  strcat(c, b);
  strcat(c, b);
  strcat(c, a);

  printf("%s\n", c);

  return 0;

}
