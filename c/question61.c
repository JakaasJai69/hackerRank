/*

You are given coordinates, a string that represents the coordinates of a square of the chessboard. Below is a chessboard for your reference.

image[at pics folder img1.png]

Return true if the square is white, and false if the square is black.

The coordinate will always represent a valid chessboard square. The coordinate will always have the letter first, and the number second.

Input Format

coordinates from the user

Constraints

coordinates.length == 2 'a' <= coordinates[0] <= 'h' '1' <= coordinates[1] <= '8'

Output Format

true or false

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  char cord[3];
  scanf("%2s", cord);
  int cordN=cord[1]-0;
  char cordA=cord[0];
  if(((cordA=='a' ||cordA=='c' || cordA=='e' || cordA=='g') && (cordN%2!=0)) || ((cordA=='b' ||cordA=='d' || cordA=='f' || cordA=='h') && (cordN%2==0))){
    printf("false\n");
  } else{ printf("true\n");}
  return 0;
}
