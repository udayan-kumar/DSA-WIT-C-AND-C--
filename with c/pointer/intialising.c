#include <stdio.h>

int main(){
    int a = 10;  // decleration of a normal variable
    int *p;  // decleration of pointer

    p = &a;  // intialisng

    printf("%d\n", a);
    printf("%d\n", *p);  // display through pointer
    return 0;
}