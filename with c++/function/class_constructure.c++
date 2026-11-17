#include <iostream>
using namespace std;

class Rectangle{
 private:
    int length;
    int breadth;
 public:
    Rectangle(){  // default constructor

    }

    Rectangle(int l, int b){  // parameter constructor
        length = l;
        breadth = b;
    }

    int area(){
        return length * breadth;
    }

    int parameter(){
        return 2*(length + breadth);
    }

    void setlength(int l){
        length = l;
    }

    void setbreadth(int b){
        breadth = b;
    }

    int getlength(){
        return length;
    }

    int getbreadth(){
        return breadth;
    }

    ~Rectangle(){  // distructor

    }
};

int main(){
    Rectangle r(10, 20);

    cout<<r.area()<<endl;
    cout<<r.parameter()<<endl;

    return 0;
}