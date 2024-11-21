/*

A word has been split into a left part and right part. Re-form the word by
adding both halves together changing the first character to an upper case
letter.

Input Format

two strings left and right

Constraints

No

Output Format

Concatenated String with first character as capital letter.

*/

#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  char a[100], b[100];
  scanf("%99s %99s", a,b);
  int i, lenA=strlen(a), lenB=strlen(b);
  for(i=0; i<lenA; i++){
    if(i==0){
      a[i]=toupper(a[i]);
      continue;
    }
    a[i]=tolower(a[i]);
  }
  for (i=0; i<lenB; i++) {
    b[i]=tolower(b[i]);
  }
  printf("%s%s", a, b);
  return 0;
}
