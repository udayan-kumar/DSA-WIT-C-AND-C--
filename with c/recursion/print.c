#include <stdio.h>

void print(int x){
    if(x == 0) return;

    printf("%d ", x);
    print(x-1);
    printf("%d ", x);
}

int main(){
    int x = 10;

    print(x);
    return 0;
}