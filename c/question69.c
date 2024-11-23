/*

Create a function/method that takes a string as a argument and returns a new string by removing all vowels from it

Input Format

a string from the user

Constraints

No

Output Format

*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

#include <string.h>
int main()
{
  char a[100], b[100];
  scanf("%99s", a);

  int len=strlen(a), i, j=0;
  for(i=0; i<len; i++){
    if(!(tolower(a[i])=='a' || tolower(a[i])=='e' || tolower(a[i])=='i' || tolower(a[i])=='o' || tolower(a[i])=='u')){
      b[j]=a[i];
      j++;
    }
  }
  b[j]= '\0';
  printf("%s\n", b);
  return 0;
}
