#include <stdio.h>

struct rectangle{
    char name[20];
    int length;
    int breadth;
};

int main(){
    struct rectangle r = {"udayan", 10, 20};
    
    printf("%s\n", r.name);
    printf("%d\n", r.length*r.breadth);
    return 0;
}
