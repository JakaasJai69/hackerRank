/*

Given a string s, and an integer array indices of the same length. The string s
will be shuffled such that the character at the ith position moves to indices[i]
in the shuffled string, return shuffled string.

Input Format

a string and an array

Constraints

no

Output Format

a string

*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  char a[100];
  scanf("%99s", a);
  int len=strlen(a);
  char b[100];
  b[0] = a[len-2];
  b[1] = a[len-1];
  b[2] = '\0';
  printf("%s%s%s",b,b,b);
  return 0;
}
