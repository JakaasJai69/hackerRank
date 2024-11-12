/*

Create a function/method that accepts a string (of person’s first and last name)
and returns a string with in first and last name swapped).

Input Format

two space separated strings

Constraints

No

Output Format

return last name followed by first name

*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  char a[100], b[100];
  scanf("%99s %99s", a, b);
  printf("%s %s", b,a);
  return 0;
}
