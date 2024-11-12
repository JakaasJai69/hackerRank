/*
Given two int values, return their sum. Unless the two values are the same, then return double their sum.

Input Format

two int values

Constraints

n1>=0 and n2>=0

Output Format

return sum or double sum

*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d", a==b ? (a+b) * 2 : (a+b));
  return 0;
}
