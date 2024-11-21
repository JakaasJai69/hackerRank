/* 

Given a string, determine if it is a Palindrome string or not. A String is Palindrome if it is equal to reverse of the original string.

Input Format

A String from the user

Constraints

Non-empty String

Output Format

Palindrome or not

*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char* reverse(const char *a){
  int i, len=strlen(a);
  char *b = malloc(len * sizeof(char));
  if(b==NULL){
    return NULL;
  }
  for(i=0; i < len; i++){
    b[i]= a[len - i - 1]; 
  }
  return b;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
  char a[100];
  scanf("%99s", a);
  char *reversed = reverse(a);
  if (reversed == NULL){
    return 1;
  }
  printf("%s\n", strcmp(a, reversed) == 0 ? "valid" : "invalid");
  free(reversed);
  return 0;
}

