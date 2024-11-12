/*

Write a program to check whether the given number is prime number or not. A number is said to prime if it is having only two factors. i.e. 1 and number itself.

Input Format

a number from the use

Constraints

n>1

Output Format

true or false


*/

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

bool isPrime(int a,int i){
  if(a==2 || a==1){
    return true;
  }
  if (a%i == 0){
    return false;
  }
  if( i > sqrt(a)){
    return true;
  }
  i++;
  return isPrime(a,i);
}


int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
  
  int a;
  scanf("%d", &a);
  printf("%s \n", isPrime(a,2) ? "true" : "false");
  return 0;
}

