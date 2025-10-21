#include <stdio.h>

#define IN 1
#define OUT 0

/* Pseudocode
    read a character
    while (character is not end-of-file indicator)
        output the character just read
        read a character
*/
io_copy(){
    int c;
    while ((c = getchar()) != EOF) 
        putchar(c);
}

io_count(){
    double nc;
    for (nc=0; getchar() != EOF; ++nc);
    printf("%.0f\n", nc);
}

word_count(){
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}

count_with_arrays(){
    int c, i, nwhite, nother;
    int ndigit[10];
    
    nwhite = nother = 0;
    for (i = 0; i < 10; ++i) ndigit[i] = 0; // initially fill array with zeros

    while ((c = getchar()) != EOF){
        if (c >= '0' && c <= '9') ++ndigit[c-'0']; // c-'0' represents the numeric value of the digit
        else if (c == ' ' || c == '\n' || c == '\t') ++nwhite;
        else ++nother;
    }

    printf("digits =");
    for (i = 0; i < 10; ++i) printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n", nwhite, nother);

}

/*
    EOF in Unix terminal -> Ctrl+D
*/
main()
{
    count_with_arrays();
}