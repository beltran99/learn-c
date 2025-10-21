#include <stdio.h>

struct point {
    int x;
    int y;
};
struct rect {
    struct point p1;
    struct point p2;
};

/* makepoint: make a point from x and y components */
struct point makepoint(int x, int y)
{
    struct point temp;

    temp.x = x;
    temp.y = y;
    return temp;
}

/* addpoint: add two points */
struct point addpoint(struct point p1, struct point p2)
{
    p1.x += p2.x;
    p1.y += p2.y;
    return p1;
}

/* ptinrect: return 1 if p in r, 0 if not */
int ptinrect(struct point p, struct rect r)
{
    return p.x >= r.p1.x && p.x < r.p2.x && p.y >= r.p1.y && p.y < r.p2.y;
}