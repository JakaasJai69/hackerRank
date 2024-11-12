/*
A company wishes to transmit data to another server. The data consists of
numbers only. To secure the data during transmission, they plan to reverse the
data during transmission, they plan to reverse the data first. **Write an
algorithm to reverse the data first **

Input Format

an integer data, representing the data to be transmitted

*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */

  int a, b, sum=0;
  scanf("%d", &a);
  while(a!=0){
    b=a%10;
    sum=sum*10+b;
    a=a/10;
  }
  printf("%d", sum);
  return 0;
}
