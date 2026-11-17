#include <stdio.h>

struct Rectangle{
    int length;
    int breadth;
};

int area(struct Rectangle r){
    return r.length * r.breadth;
}

int main(){
    struct Rectangle r = {10, 20};

    int ans = area(r);

    printf("%d", ans);
    return 0;
}