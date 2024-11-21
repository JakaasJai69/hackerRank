/*

Accept video length in minutes the format is mm:ss in String format, create a
function that takes video length and return it in seconds.

Input Format

video length in mm:ss

Constraints

no

Output Format

length in seconds

*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int m, s;
  scanf("%d:%d", &m, &s);
  printf("%d", (m * 60) + s);
  return 0;
}
