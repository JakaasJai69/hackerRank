/*

Write a function that finds the longest word in a sentence. If two or more words
are found, return the first longest word. Characters such as apostophe, comma,
period (and the like) count as part of the word (e.g. O'Connor is 8 characters
long).

Input Format

a string from the user

Constraints

no

Output Format

longest word

*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printIndex(char *arr, int b, int c){

  while(b<c){
    printf("%c", arr[b]);
    b++;
  }
}

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */

  char a[100];
  fgets(a, sizeof(a), stdin);
  char *arr = a;
  strcat(arr, " ");
  int len=strlen(a), i, sum=0, minInd=0, maxInd=0;
  for(i=0; i<len; i++){
    if(a[i] != ' '){
      sum+=1;
    } else{
      if(maxInd-minInd < sum){
        minInd=i-(sum);
        maxInd=(i);
      }
      sum=0;
    }
  }
  printIndex(arr, minInd, maxInd);

  return 0;

}
