#include <stdio.h>

void fun(int x){
    if(x == 0) return;

    printf("%d ", x);
    fun(x - 1);
}

void loop(int x){
    while(x > 0){
        printf("%d ", x);
        x--;
    }
}

int main(){
    int x = 10;

    fun(x);
    printf("\n");
    loop(x);
    return 0;
}