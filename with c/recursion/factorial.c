#include <stdio.h>

int product(int n){
    if(n>1){
        return n * product(n - 1);
    }
}

int main(){
    int ans = product(5);

    printf("%d ", ans);
    return 0;
}