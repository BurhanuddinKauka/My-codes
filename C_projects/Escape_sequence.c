/* Escape sequence = character combined consisting of a backslash \
                     followed by a letter or combination of digits.
                     They specify actions within a line or string of text.
                     \n = newline
                     \t = newtab

*/

#include<stdio.h>

int main() {
    printf("\"I like Pizza\" - Abraham Lincoln probably\n");
    printf("\'I like Pizza\' - Abraham Lincoln probably\n");
    printf("\\I like Pizza\\ - Abraham Lincoln probably\n");
return  0;
}