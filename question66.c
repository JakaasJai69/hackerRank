/* 

Create a function/method that takes a string and returns a string in which each character is repeated once

Input Format

A string from the user

Constraints

No

Output Format

String

*/


#include <stdio.h>
#include <string.h>
int main(){
  char a[100], doubled[200];
  scanf("%99s", a);
  int len=strlen(a), i;
  for(i=0; i<len; i++){
    doubled[(2*i)]= a[i];
    doubled[(2*i)+1]= a[i];
  }
  doubled[(2*i) + 2] = '\n'; 
  printf("%s", doubled);
  return 0;
}
