#include <stdio.h>

struct Card{
    int face;
    int shape;
    int color;
};

int main(){
    struct Card deck[3] = {{1,0,0}, {2,3,1}, {3,5,2}};

    for(int i = 0; i<3; i++){
        printf("face of the deck: %d\n ", deck[i].face);
        printf("shape of the deck: %d\n ", deck[i].shape);
        printf("color of the deck: %d\n ", deck[i].color);
    }
    return 0;
}