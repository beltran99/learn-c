### Pointers and Arrays
A pointer is a variable that contains the address of a variable.

Imagine c is a char and p is a pointer that points to it:
```c
p = &c;
```
The unary operator & gives the address of an object, and it only applies to objects in memory: variables and arrays. It cannot be applied to expressions, constants or register variables.

On the other hand, the unary operator * is the dereferencing operator, and when applied to a pointer, it accesses the object the pointer points to.

```c
int x = 1, y = 2, z[10];
int *ip;    /* ip is a pointer to int */

ip = &x;    /* ip now points to x */
y = *ip;    /* y is now 1 */
*ip = 0;    /* x is now 0 */
ip = &z[0]; /* ip now points to z[0]; */

int *iq;
iq = ip;    /* makes iq point to whatever ip pointed to */
```

Every pointer is constrained to point to a specific data type. Exception: pointer to void, used to hold any type of pointer but cannot be dereferenced itself.

Since C passes arguments by value, there is no direct way for the called function to alter a variable in the calling function. The way to obtain the desired effect is for the calling program to pass pointer to the values to be changed.

```c
int a[10];
int *pa;
pa = &a[0]; /* pa contains the address of a[0] */
pa = a;     /* equivalent to pa = &a[0]; */

int x = *pa; /* copies the content of a[0] into x */

/* 
pa+i is the address of a[i] and *(pa+i) is the contents of a[i]
/*
```

Pointers may be compared under certain circumstances. If p and q point to members of the same array, then relations like ==, !=, <, >, etc, work. For example, p < q is true if p points to an earlier member of the array than q does.

> [!Warning]
> The behaviour is undefined for comparisons between pointers that do not point to members of the same array.

Pointer arithmetic is consistent in C: if p were a pointer to float (which occupy more storage than chars), p++ would advance to the next float. All the pointer manipulations take into account the size of the object pointed to.

> [!Important]
> Standard idioms for pushing and popping a stack.
> ```c
> *p++ = val; /* push val onto stack */
> val = *--p; /* pop top of stack into val */
>```