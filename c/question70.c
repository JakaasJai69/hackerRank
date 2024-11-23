/* 

Create a function that takes a string as input and returns a string with spaces in between all of the characters.

Input Format

A string from the user

Constraints

No

Output Format

A space seperated string

*/

#include <stdio.h>
#include <string.h>

#include <string.h>
int main(){
  char a[100], b[200];

  scanf("%99s", a);
  
  int len=strlen(a), i, j=0;
  for(i=0; i<len; i++){
    b[j]= a[i];
    j++;
    b[j]= ' ';
    j++;
  }
  b[j]= '\0';
  printf("%s \n", b);
  return 0;
}
