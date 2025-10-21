#define ALLOCSIZE 1000 /* size of available space */

static char allocbuf[ALLOCSIZE];    /* storage for alloc */
static char *allocp = allocbuf;    /* next free position */

/* analogous functions to malloc and free */

/* alloc: return pointer to n characters */
char *alloc (int n) 
{
    if (allocbuf + ALLOCSIZE - allocp >= n){ /* if it fits */
        allocp += n;
        return allocp - n; /* old p */
    } else    /* not enough room */
        return 0;   /* zero is never a valid address for data */
}

/* free storage pointed to by p */
void afree(char *p)
{
    if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
        allocp = p;
}

/* strcpy: copy t to s */
void strcpy(char *s, char *t)
{
    while(*s++ = *t++)
        ;
}

/* strcmp: return <0 if s<t, 0 if s == t, >0 if s>t */
int strcmp(char *s, char *t)
{
    for (; *s == *t; s++, t++)
        if (*s == '\0')
            return 0;
    return *s - *t;
}