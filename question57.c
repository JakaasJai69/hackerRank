/*

Create a function/method that takes a string as its argument and returns the
string in reversed order.

Input Format

A string

Constraints

No

Output Format

reversed string

*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  char a[100];
  char b[100];
  fgets(a, sizeof(a)-1, stdin);
  int i, len=strlen(a);
  for(i=0; i<len; i++){
    b[len-i-1] = a[i]; 
  }
  b[len]='\0';
  printf("%s", b);
  return 0;
}
