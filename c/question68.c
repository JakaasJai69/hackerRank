/*

Andy, Ben and Charlotte are playing a board game. the three of them decided to come up with a new scoring system. A player's first initial ("A","B" and "C") denotes that players scoring a signle point. Given a string of capital letters. return an array of the player's score.

Input Format

A string from the user

Constraints

No

Output Format

Score

*/

#include <stdio.h>
#include <string.h>

int main(){
  char a[3], b[6] = "0 0 0";
  scanf("%3s", a);
  int i;
  for(i=0; i<4; i++){
    switch (a[i])
    {
    case 'A':
      b[0] = '1';
      break;
    case 'B':
      b[2] = '1';
      break;
    case 'C':
      b[4] = '1';
      break;
    default:
      break;
    }
  }
  b[5]='\0';
  printf("%s", b);
  return 0;
}
