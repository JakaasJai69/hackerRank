/*
A network protocol specifies how data is exchanged via transmission media. The protocol converts each message into a stream of 1's and 0's.
Given a decimal number, write an algorithm to convert the number into a binary form.

Input Format

a decimal number from the user

Constraints

n>=0

Output Format

its equalent binary form
*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int reverse(int a){
  int b, sum=0;
  while(a>0){
    b=a%10;
    sum=sum*10+b;
    a=a/10;
  }
  return sum;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
  int a, sum=1;
  scanf("%d", &a);
  while (a>0){
    sum = (sum * 10) + (a%2);
    a = a/2;
  }
  sum = reverse(sum);  
  sum = sum/10;
  printf("%d \n", sum);
  return 0;
}
