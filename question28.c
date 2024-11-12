/* 

You are climbing a stair case. It takes n steps to reach to the top. Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Note: Given n will be a positive integer.

Input Format

a number from the user

Constraints

no

Output Format

number of ways

*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fac(int a){
  if (a<=0){
    return 1;
  }
  int sum=1;
  while(a!= 1){
    sum = sum * a;
    a-=1;
  }
  return sum;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
  int n, p, q=0, sum=0, a;
  scanf("%d", &n);
  p=n;
  a=n;
  if (a%2==0){
    while(n >= (a/2) ){
      sum+= fac(n)/(fac(p)*fac(q));
      n-=1;
      p-=2;
      q+=1;
    }
  }
  else{
    while(n>= (a-1)/2 + 1 ){
      sum+= fac(n)/(fac(p)*fac(q));
      n-=1;
      p-=2;
      q+=1;
    }
  }
  printf("%d \n", sum);
  return 0;
}
