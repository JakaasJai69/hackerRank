/*

Q2. Write a program to print first 10 integers and their squares using while loop.
1 1
2 4
3 9 and so on 

*/

#include <stdio.h>

int square(int num){
  return num * num;
}

int main()
{
  int a = 1;
  while (a <= 10){
    printf("%d %d\n", a, square(a));
    a++;
  }
}
