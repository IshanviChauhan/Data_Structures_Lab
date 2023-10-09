//To check if the given string is a palindrome using Recursion.
#include <stdio.h>
#include <string.h>
int palindrome(char s1[50], char s2[50], int i, int length)
{
    int count = i;
    if(s1[i]==s2[length])
    {
        count = 0;
    }
    if(s1[i]==s2[length])
    {
        count++;
    }
    return count;
    palindrome(s1,s2,i+1,length-1);
}
void main()
{
    char string1[50], string2[50];
    int length;
    printf("Enter your String : ");
    gets(string1);
    puts(string1);
    strcpy(string2,string1);
    strrev(string2);
    length = strlen(string1);
}