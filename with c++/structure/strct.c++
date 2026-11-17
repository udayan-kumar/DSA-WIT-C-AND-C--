#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

//struct Rectangle r1;  // we can also declare as like

int main(){
    struct Rectangle r1 = {20, 20};  

    printf("%d\n", sizeof(r1));
    cout<<r1.length <<endl;
    printf("%d\n", r1.breadth);
    return 0;
}