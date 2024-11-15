/*

Create a function that takes a string, check if it has the same number of x's and o's and returns either true or false.
1. return boolean value true or false.
2. returns true if the amount x's and o's are the same.
3. returns false if they are not the same amount.
4. the string can contains any character.
5. when 'x' and 'o' are not in the string, return true.

Input Format

a string

Constraints

No

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
    char a[100];
    fgets(a, sizeof(a), stdin);

    int len = strlen(a), i, countX = 0, countO = 0;
    for (i = 0; i < len; i++)
    {
      if (a[i] == 'x')
      {
        countX += 1;
      }
      if (a[i] == 'o')
      {
        countO += 1;
      }
    }
    if((countX == countO) || (!countX&& !countO)){
      printf("true");
    } else{ printf("false");}
    return 0;
  }
