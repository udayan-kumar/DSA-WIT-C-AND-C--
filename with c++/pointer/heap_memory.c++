#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
    int *p;
    //p = (int*)malloc(5 * sizeof(int));  // we can locate in heap memory in both c and c++

    p = new int[5];  // we can locate only in c++

    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;

    for(int i = 0; i<5; i++){
        cout<< p[i] << " ";
    }
    cout<<endl;

    //! we must delocating the heap memory after work

    //delete []p;  // we can delete by this in c++
    free(p);       // we can delete by this in c
    return 0;
}