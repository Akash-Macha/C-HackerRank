// https://www.hackerrank.com/challenges/playing-with-characters/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>

int main() 
{
    char ch;
    char* s, sen;
    scanf("%c",&ch);
    fflush(stdin);
    
   	scanf("%s", s);
	fflush(stdin);

	scanf("%[^\n]s", sen);
	
    printf("%c\n%s\n%s", ch, s, sen);
       
    return 0;
}
