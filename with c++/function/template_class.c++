#include <iostream>
using namespace std;

class Rectangle{
 private:
    int length;
    int breadth;
 public:
    Rectangle(){  // default constructor

    }

    Rectangle(int l, int b);
    int area();
    int parameter();
    void setlength(int l);
    void setbreadth(int b);
    int getlength();
    int getbreadth();

    ~Rectangle(){  // distructor

    }
};

    Rectangle :: Rectangle(int l, int b){  // parameter constructor
        length = l;
        breadth = b;
    }

    int Rectangle :: area(){
        return length * breadth;
    }

    int Rectangle :: parameter(){
        return 2*(length + breadth);
    }

    void Rectangle :: setlength(int l){
        length = l;
    }

    void Rectangle :: setbreadth(int b){
        breadth = b;
    }

    int Rectangle :: getlength(){
        return length;
    }

    int Rectangle :: getbreadth(){
        return breadth;
    }

int main(){
    Rectangle r(10, 20);

    cout<<r.area()<<endl;
    cout<<r.parameter()<<endl;

    return 0;
}