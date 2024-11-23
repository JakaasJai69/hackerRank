/*
Create a function/method that takes, a word and returns true if the word has two consecutive identical letters.

Input Format

A string from the user

Constraints

No

Output Format

true or false

*/

#include <stdio.h>
#include <string.h>

int main(){
  char a[100], cmpStr;
  scanf("%99s", a);

  int len=strlen(a), i, j;
  for(i=0; i<len; i++){
    cmpStr = a[i];
    for(j=i+1; j<len; j++){
      if(cmpStr == a[j]){
        printf("true \n");
        return 0;
      }
    }
  }
  printf("false \n");
  return 0;
}

