/*

Write a Java program to take an input string and exchange the first and last word and reverse the middle words.

Input Format

a string

Constraints

no

Output Format

a string

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int firstIndex(char *strIn){
  int len=strlen(strIn), i;

  for(i=0; i<len; i++){
    if(strIn[i] == ' '){
      return i;
    }
  }
  return 0;
}


int lastIndex(char *strIn){
  int len=strlen(strIn), i;
  for(i=len; i>=0; i--){
    if(strIn[i] == ' '){
      return i+2;
    }
  }
  return 0;
}

char conStr(char *strIn, int minIndex, int maxIndex){
  char strOut[100];
  int i, j=0;
  for(i=minIndex; i<maxIndex; i++){
    strOut[j]=strIn[i];
    j++;
  }
  return strOut;
}

int main()
{

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */

  char a[100];
  fgets(a, sizeof(a), stdin);
  char *strIn=a;

  int firstInd=firstIndex(strIn);
  int lastInd=lastIndex(strIn);

  printf("%d %d %d\n", firstInd, lastInd, strlen(a));

  char *strOut=conStr(strIn, 0, firstInd);
  printf("%s", *strOut);

  return 0;
}
