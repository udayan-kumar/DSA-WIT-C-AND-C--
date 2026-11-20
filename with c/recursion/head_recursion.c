#include <stdio.h>

void fun(int n){
    if(n > 0){
        fun(n - 1);
        printf("%d ", n);
    }
}

void loop(int n){
    int i = 1;
    while(i <= n){
        printf("%d ", i);
        i++;
    }
}

int main(){
    int n = 10;

    fun(n);
    printf("\n");
    loop(n);
    return 0;
}