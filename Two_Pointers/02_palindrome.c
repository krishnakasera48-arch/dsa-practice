#include<stdio.h>
#include <string.h>
int is_palindrome(char str[])
{
    int start = 0;
    int end = strlen(str) - 1;
    while (start <end)
    {
        if (str[start] == str[end])
        {
            start++;
            end--;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char str[] = "racecar";
    if (is_palindrome(str))
    {
        printf("%s is a palindrome\n", str);
    }
    else
    {
        printf("%s is not a palindrome\n", str);
    }
    return 0;
}