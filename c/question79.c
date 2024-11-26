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
      return i+1;
    }
  }
  return 0;
}

char *strCon(const char *strIn, int start, int end){
  
  if(start < 0 || end >= strlen(strIn) || end < start || end < 0){
    return NULL;
  }
  int length;
  length = end - start +1;

  char *strOut= (char*)malloc(length+1);

  if(strOut == NULL){
    return NULL;
  }
  strncpy(strOut, strIn + start, length);

  strOut[length] = '\0';
  return strOut;


}

char *reverseWord(const char *strIn){
  if(strlen(strIn) == 0){
    return NULL;
  }
  int i, k=0, len=strlen(strIn);
  char *strOut = (char*)malloc(len+1);

  for(i=len-1; i!=0; i--){
    strOut[k] = strIn[i];
    k++;
  }
  return strOut;
}

int main()
{

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */

  char a[100], b[100];
  fgets(a, sizeof(a), stdin);
  char *strIn=a;

  int firstInd=firstIndex(strIn);
  int lastInd=lastIndex(strIn);
  int len=strlen(a);

  //printf("%d %d %lu\n", firstInd, lastInd, strlen(a));

  char *firstWord = strCon(a, 0, firstInd);
  char *lastWord = strCon(a, lastInd, len-2);
  char *middleWord = strCon(a, firstInd, lastInd-1);

  //printf("%s \n", firstWord);
  //printf("%s \n", lastWord); 
  //printf("%s \n", middleWord);

  strcpy(b, lastWord);
  //printf("%s \n", reverseWord(middleWord));
  strcat(b, reverseWord(middleWord));
  strcat(b, " ");
  strcat(b, firstWord);

  free(firstWord);
  free(lastWord);
  free(middleWord);

  printf("%s \n", b);

  return 0;
}
