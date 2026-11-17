#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    // int a = 10;
    // int *p;

    // p = &a;

    // cout<< a << endl;
    // printf("%d %d\n", p, &a);
    // cout<< p <<" "<< &a <<endl;

    //! ARRAY THROUGH POINTER
    int arr[5] = {1,2,3,4,5};
    int *p = arr;

    for(int i = 0; i<5; i++){
        cout<< p[i] << " ";
    }
    cout<<endl;

    for(int i = 0; i<5; i++){
        printf("%d ", p[i]);
    }
    return 0;
}