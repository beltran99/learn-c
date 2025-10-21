#include <stdio.h>
#include <ctype.h>
#include <string.h>

/* atoi: convert s to integer */
/* statement s[i] >= '0' && s[i] <= '9' can be substituted by isdigit(c) from <ctype.h> */
int atoi(char s[])
{
    int i, n;

    n=0;
    for (i=0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}

/* lower: convert c to lower case; ASCII only */
/* see function tolower(c) in standard header <ctype.h> */
int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}

/* htoi: convert string of hexadecimal digits to integer */
int htoi(char s[])
{

    int result = 0;
    int base = 1;

    int i, end;
    int len = strlen(s);

    if (len > 2 && s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
        end = 2;
    else
        end = 0;

    for (i=len-1; i >= end && isxdigit(s[i]) ; --i)
    {
        char c = tolower(s[i]);
        int value = isdigit(c) ? (c - '0') : (10 + c - 'a');
        result += value * base;
        base *= 16;
    }
    return result;
}

int htoi(const char s[]) {
    int n = 0;
    int i = 0;

    // Skip optional "0x" or "0X"
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
        i = 2;

    for (; s[i] != '\0' && isxdigit(s[i]); ++i) {
        char c = tolower(s[i]);
        int value = isdigit(c) ? (c - '0') : (10 + c - 'a');
        n = n * 16 + value;
    }

    return n;
}

main(){
    char s[] = "0Xff";
    int i = htoi(s);

    printf("%s => %d\n", s, i);
}