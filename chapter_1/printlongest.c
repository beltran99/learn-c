/*  PSEUDOCODE
    while (there's another line)
        if (it's longer than the previous longest)
            save it
            save its length
    print longest line
*/

#include <stdio.h>
#define MAXLINE 1000 // maximum input line size

int mygetline(char line[], int maxline);
void mycopy(char to[], char from[]);

/* print longest input line */
main()
{
    int len;                // current line length
    int max;                // maximum length seen so far
    char line[MAXLINE];     // current input line
    char longest[MAXLINE];  // longest line saved here
    
    max = 0;
    while((len = mygetline(line, MAXLINE)) > 0){
        if (len > max) {
            max = len;
            mycopy(longest, line);
        }
    }
    if (max > 0)
        printf("%s", longest);
    return 0;
}

/* mygetline: read a line into s, return length */
int mygetline(char s[], int lim) // the size of the array is supplied in declaration to set aside storage
{
    int c, i;

    for (i=0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0'; // the null character marks the end of the string of characters
    return i;
}

/* mycopy: copy 'from' to 'to'; assume to is big enough */
void mycopy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}