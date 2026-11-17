#include <iostream>
#include <stdio.h>
using namespace std;

//! CLASS AND STRUCTURE ARE SAME IN C++. ONLY ONE DIFFERENCE BETWEEN THEM THAT IS STRUCTURE IS PUBLIC AND CLASS IS PRIVATE

struct Rectangle{
    public:
    int length;
    int breadth;

    void intialising(int l, int b){
        length = l;
        breadth = b;
    }

    int area(){
        return length * breadth;
    }

    int perimeter(){
        int p;
        p = 2*(length+breadth);

        return p;
    }

};

int main(){
    Rectangle r;
    int l = 10, b = 20;

    r.intialising(l, b);
    int a = r.area();
    int p = r.perimeter();

    printf("%d %d", a, p);
    return 0;
}