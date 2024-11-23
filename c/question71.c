/*

Create a function that replaces all the vowels in a string with a specified
character,

Input Format

A string from the user

Constraints

No

Output Format

A string

*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

#include <string.h>
int main()
{
  char a[100], b[100], c[2];
  scanf("%99s %1s", a, c);

  int len=strlen(a), i;
  for(i=0; i<len; i++){
    if(tolower(a[i])=='a' || tolower(a[i])=='e' || tolower(a[i])=='i' || tolower(a[i])=='o' || tolower(a[i])=='u'){
      b[i]=c[0];
    } else { b[i] = a[i];}
  }
  b[i]= '\0';
  printf("%s\n", b);
  return 0;
}
