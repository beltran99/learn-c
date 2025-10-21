### Structures
A structure is a collection of one or more variables, possibly of different types, grouped together under a single name for convenient handling.
```c
struct point {
    int x;
    int y;
};

struct point pt = { 2, 5 };

printf("%d, %d", pt.x, pt.y);
```

Structures can be nested.
```c
struct rect {
    struct point p1;
    struct point p2;
};

struct rect myrect;
printf("%d", myrect.p1.x);
```

If a large structure is to be passed to a function, it is generally more efficient to pass a pointer than to copy the whole structure.
```c
struct point origin, *pp;

pp = &origin;
printf("origin is (%d, %d)\n", (*pp).x, (*pp).y);
```

Shorthand for pointers to structures: p->member-of-structure
```c
printf("origin is (%d, %d)\n", pp->x, pp->y);
```

C provides a facility called *typedef* for creating new data type names. For example:
```c
typedef char *String;
typedef struct tnode *Treeptr;
```

A union is a single variable that may hold any one of several types. Syntax:
```c
union u_tag {
    int ival;
    float fval;
    char *sval;
} u;
```

Bit-field or field:
```c
struct {    /* the number after : represents the field width in bits */
    unsigned int is_keyword : 1;
    unsigned int is_extern : 1;
    unsigned int is_static : 1;
} flags;

flags.is_extern = flags.is_static = 1; /* turns the bits on */
flags.is_extern = flags.is_static = 0; /* turns the bits off */
if (flags.is_extern == 0 && flags.is_static = 0); /* tests the bits */
```
Fields do not need to be named. They are not arrays, and they do not have addresses, so the & operator cannot be applied to them.