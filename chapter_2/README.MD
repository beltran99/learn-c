### Variable names
- Don't start name of a variable with underscore
- Case sensitive
- Normally lowercase for variable names and uppercase for symbolic constants

### Data types
| Type   | Description                                               |
| ------ | --------------------------------------                    |
| char   | single byte, holds one character                          |
| int    | integer number, natural size for integers on host machine |
| float  | single-precision floating point number                    |
| double | double-precision floating point number                    |

- _short_ and _long_ apply to integers. _short_ is 16 bits, _long_ is 32 bits, int either 16 or 32.
- _singed_ or _unsigned_ apply to char and integers. _unsigned_ numbers are always positive or zero.
- _long double_ specifies extended-precision floating point.

### Constants
- Long constant ends in l or L.
- Unsigned constants end in u or U.
- Float constants end in f or F.
- The value of an integer can be also specified in octal and hexadecimal. Leading 0 for an int constant means octal; a leading 0x or 0X means hexadecimal.
- A character constant is an integer, written as one character within single quotes, such as 'x'. The value of a character constant is the numeric value of the character in the machine's character set.
- Distinction between character constant ('x') and a string that contains a single character ("x").
- The qualifier _const_ can be applied to the declaration of any variable to indicate that its value will not be changed.

```c
# define VTAB '\013' /* ASCII vertical tab */
# define BELL '\007' /* ASCII bell character */
```

```c
# define VTAB '\xb' /* ASCII vertical tab */
# define BELL '\x7' /* ASCII bell character */
```

| Escape sequence | Description            |
| --------------- | ---------------------- |
| \a              | alert (bell) character |
| \b              | backspace              |
| \f              | formfeed               |
| \n              | newline                |
| \r              | carriage return        |
| \t              | horizontal tab         |
| \v              | vertical tab           |
| \\              | backslash              |
| \?              | question mark          |
| \'              | single quote           |
| \"              | double quote           |
| \ooo            | octal number           |
| \xhh            | hexadecimal number     |

Enumeration constant:
- List of constant integer values.
- The first name in an enum has value 0, the next 1, and so on, unless explicit values are specified.
- If not all values are specified, unspecified values continue the progression from the last specified value.
- Names in different enumerations must be distinct.
- Values need not be distinct in the same enumeration.
  
```c
enum boolean { NO, YES };
```

```c
enum escapes { BELL = '\a', BACKSPACE = '\b', TAB = '\t', NEWLINE = '\n', VTAB = '\v', RETURN = '\r' };
```

```c
enum months { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };
```

### Arithmetic operations
+, -, *, /, %

### Relational and logical operators
\>, >=, <, <=, ==, !=, &&, ||, !

numeric value of a relational or logical expression is 1 if the relation is true, 0 if the relation is false.

### Cast
*(type-name) expression*

```c
#include <math.h>
int n = 9;
sqrt((double) n); /* cast int to double */
```

### Increment and Decrement
++ and -- may be used as prefix operators or as postfix operators. *++n* increments n before its value is used, while *n++* increments n after its value has been used. An expression like *(i+j)++* is illegal.

### Bitwise Operators
| Operator | Description          |
| -------- | -------------------- |
| &        | bitwise AND          |
| \|       | bitwise inclusive OR |
| ^        | bitwise exclusive OR |
| <<       | left shift           |
| >>       | right shift          |
| ~        | unary complement     |

Example
```c
x = x | SET_ON;
```
sets to one the bits that are set to one in SET_ON.

### Conditional expressions
```c
z = (a > b) ? a : b;  /* z = max(a, b) */
```