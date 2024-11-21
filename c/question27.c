/*


Given three integers i,j & k, a sequence sum to be the value of i+(i+1)+(i+2)..+j+(j-1)+(j-2)+..+k (increment from i until it equals to j, then decrement from j until equals k). Given values i,j,k. caluclate the sequence sum as described.
int getSequenceSum(int,int,int);

Input Format

Three int values

Constraints

no

Output Format

sum based on given constraints

*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
  int i, j, k, a=0, sum=0;
  scanf("%d %d %d", &i, &j, &k);
  a=0;
  while(a+i<j){
    sum= sum + i + a;
    a++;
  }
  a=0;
  while(j+a>=k){
    sum = sum + j + a;  
    a--;
  }
  printf("%d \n", sum);
  return 0;
}
