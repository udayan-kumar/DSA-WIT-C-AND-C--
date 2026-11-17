#include <stdio.h>

struct Rectangle{
    int length;
    int breadth;
};

void intialising(struct Rectangle *r, int l, int b){
    r->length = l;
    r->breadth = b;

    printf("%d %d\n", r->length, r->breadth);
}

void area(struct Rectangle r){
    printf("%d %d\n", r.length, r.breadth);
}

void change(struct Rectangle *r, int l){
    r->length = l;

    printf("%d %d\n", r->length, r->breadth);
}

int main(){
    struct Rectangle r;

    intialising(&r, 10, 20);
    area(r);
    change(&r, 20);
    return 0;
}