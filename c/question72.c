/*

Write a function that takes a string name and number num (either 1 or 0) and
return "Hello"+name if number is 1, otherwise "Bye"+name.

Input Format

a string from the user

Constraints

no

Output Format

a string

*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  
  char a[100], b[105];
  int isBye;
  scanf("%99s %d", a, &isBye);

  if(!isBye){
    strcpy(b, "Bye ");
  } else {strcpy(b, "Hello ");}

  strcat(b, a);
  b[strlen(b)]='\0';
  printf("%s \n", b);
  return 0;
}
