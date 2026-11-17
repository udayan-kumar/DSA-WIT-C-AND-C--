#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int area(struct Rectangle r){
    return r.length * r.breadth;
}

int main(){
    struct Rectangle r = {10, 20};

    int ans = area(r);

    cout<<ans<<endl;
    return 0;
}