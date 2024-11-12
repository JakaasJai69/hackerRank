/*
Implement the following function int BlackJack(int n1,int n2);
the function accepts two +ve integers n1 and n2 as its arguments. Implement the
function on given two vlaues to return an int value as follows return whichever
value is nearest to 21 without going over. Return if they go both go over.

Input Format

two int values n1 and n2

Constraints

no

Output Format

0 or n1 or n2

*/

#include <stdio.h>

int blackjack(int a, int b){
  int c=a;
  a=a>b?a:b;
  b=c>b?b:c;
  return a<=21?a:b<=21?b:0;
}

int main(){
  int a,b;
  scanf("%d%d", &a, &b);
  printf("%d \n", blackjack(a, b));
  return 0;
}
