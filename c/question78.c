/*

Given a string S, the task is to remove all the duplicates in the given string.

Input Format

a string from the user

Constraints

remove all duplicates

Output Format

a string without duplicates

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */

  char strIn[100], strOut[100], currStr[2];
  scanf("%99s", strIn);
  int len=strlen(strIn), i, j, k=0;

  for(i=0; i<len; i++){
    int add=1;
    currStr[0]=strIn[i];
    for(j=0; j<k; j++){
      if(currStr[0]==strOut[j]){
        add=0;
      }
    }
    if(add){
      strOut[k]=currStr[0];
      k++;
    }
  }
  strOut[k]='\0';
  printf("%s", strOut);

  return 0;
}
