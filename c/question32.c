/*

Program to count number of special characters and white spaces in a given
string.

Input Format

A string from the user

Constraints

non-empty string

Output Format

number of special characters

*/

#include <stdio.h>
#include <string.h>

int main() {
    char specialChars[] = " !@#$%^&*()-_=+[]{}|;:'\",.<>?/\\";
    char a[100];
    fgets(a, sizeof(a), stdin);
    int i, j, s = 0;
    int len_a = strlen(a);
    int len_special = strlen(specialChars);
    
    for (i = 0; i < len_a; i++) {
        for (j = 0; j < len_special; j++) {
            if (a[i] == specialChars[j]) {  // Directly compare characters
                s++;
                break;  // Stop inner loop once a match is found
            }
        }
    }
    
    printf("%d\n", s);
    return 0;
}
