/*

Create a function/method that takes two Strings and returns true of the first
string ends with second string, otherwise return false

Input Format

two strings

Constraints

No

Output Format

true or false

*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  char a[100], b[100];
  scanf("%99s %99s", a, b);
  if(a[strlen(a)-1] == b[strlen(b)-1]){
    printf("true \n");
  } else{printf("false \n");}
  return 0;
}
