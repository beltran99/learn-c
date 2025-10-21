#define HASHSIZE 101

struct nlist {          /* table entry: */
    struct nlist *next; /* next entry in chain */
    char *name;         /* defined name */
    char *defn;         /* replacement text */
};

static struct nlist *hashtab[HASHSIZE]; /* pointer table */

/* hash: form has value for string s */
unsigned hash(char *s);

/* lookup: look for s in hashtab */
struct nlist *lookup(char *s);

/* install: put (name, defn) in hashtab */
struct nlist *install(char *name, char *defn);