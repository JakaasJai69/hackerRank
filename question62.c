  /*

  Write a function that finds the word "bomb" in the given string (not case sensitive). Return "DUCK!" if found, otherwise,"Relax, there's no bomb.".

  Input Format

  String

  Constraints

  No

  Output Format

  "DUCK!" or "Relax, there's no bomb.".

  */

  #include <stdio.h>
  #include <string.h>
  #include <ctype.h>

  int main() {
      char a[100];
      fgets(a, sizeof(a), stdin);

      int len = strlen(a);
      int i;
      int foundBomb = 0;

      for (i = 0; i <= (len - 4); i++) {
          if (tolower(a[i]) == 'b' && tolower(a[i + 1]) == 'o' &&
              tolower(a[i + 2]) == 'm' && tolower(a[i + 3]) == 'b') {
              printf("DUCK!\n");
              foundBomb = 1;
              break;
          }
      }

      if (!foundBomb) {
          printf("Relax, there's no bomb.\n");
      }

      return 0;
  }
