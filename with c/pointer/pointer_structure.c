#include <stdio.h>

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    struct Rectangle r1 = {10, 20};
    struct Rectangle *p = &r1;

    printf("%d\n", r1.length);

    // we can use both way
    printf("%d\n", (*p).length);
    printf("%d\n", p->length);
    return 0;
}