#include <stdio.h>

/*
    In C, all function arguments are passed by value. This means that the called
    function is given the values of its arguments in temporary variables rather
    than the originals. This contrasts with a call by reference, in which the
    called routine has access to the original argument, not a local copy.

    However, this does not apply to arrays. When the name of an array is used
    as an argument, the value passed to the function is the location or address
    of the beginning of the array -- there is no copying of array elements.
    By subscripting this value, the function can access and alter any element
    of the array.
*/

int power(int m, int n);

main(){
    int i;

    for (i=0; i<10; ++i)
        printf("%d %d %d\n", i, power(2,i), power(-3, i));
    return 0;
}

int power(int base, int n)
{
    int i, p;

    p = 1;
    for (i=1; i <=n; ++i)
        p = p * base;
    return p;
}