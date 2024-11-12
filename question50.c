/*

Create a function that sums the total number of digits between two numbers
inclusive. for example, if the numbers are 19 and 22, then
(1+9)+(2+0)+(2+1)+(2+2)=19.

Input Format

two numbers from the user

Constraints

no

Output Format

sum of digits between n1 and n2
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int a, b, i, j,sum=0;
  scanf("%d%d", &a, &b);
  for(i=a; i<= b; i++){    
    j=i;
    while(j!=0){
      sum+=j%10;
      j=j/10;
    }
  }
  printf("%d", sum);
  return 0;
}
