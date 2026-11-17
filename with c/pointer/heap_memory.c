#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    p = (int*)malloc(2 * sizeof(int));  // it will locate in heap memaory

    printf("%d\n", sizeof(p));
    return 0;
}