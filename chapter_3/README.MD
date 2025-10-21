### If-Else
```c
if (expression)
    statement
else if (expression)
    statement
else
    statement
```

### Switch
```c
switch (expression){
    case const-expr: statements
    case const-expr: statements
    default: statements
}
```

### While
```c
while (expression){
    statement
}
```

### For
```c
for (expr1; expr2; expr3;)
    statement
```

### Do-while
```c
do
    statement
while (expression);
```

### Goto and Labels
Most common usage is to abandon processing in some deeply nested structure, such as breaking out of two or more loops at once. The *break* statement cannot be used directly since it only exits the innermost loop.
```c
for (...)
    for (...) {
        ...
        if (disaster)
            goto error;
    }
...
error:
    handle error
```