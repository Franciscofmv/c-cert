#include <iostream>

using std::cout;
using std::endl;

class Base1{
    public:
        Base1(int num){b1 = num;}
        void print(){cout << "Hi1"<< endl;}
    protected:
        int b1;
};

class Base2{
    public:
        Base2(int num){b2 = num;}
        void print(){cout << "Hi2" << endl;}
    protected:
        int b2;
};

class Child :public Base1, public Base2{
    public:
        Child(int n1, int n2): Base1(n1), Base2(n2){}

};

int main(){
    Child test(1,2);
    test.print();
    return 0;
}