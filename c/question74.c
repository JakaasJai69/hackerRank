/*

create a function that takes a string and returns, the middle character(s). if
the word's length is odd return the midlle character. if the word's length is
even, return the middle two characters.

Input Format

a string from the user

Constraints

no

Output Format

middle character(s)

*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  char a[100];
  scanf("%99s", a);
  
  int len=strlen(a)-1;
  if(len%2 != 0){ 
    printf("%c", a[len/2]);
    printf("%c", a[(len/2)+1]);
  } else{printf("%c", a[(len+1)/2]);}
  return 0;
}
