#include <iostream>
using namespace std;

void fun(int *a, int n){
    a[0] = 13;
}

int main(){
    int a[] = {1,2,3,4,5};
    int n = 5;

    fun(a, n);

    for(int ele : a){
        cout<<ele << " ";
    }
    return 0;
}