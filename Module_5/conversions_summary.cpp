#include <iostream>
#include <string>

using std::cout;
using std::endl;

void print();
class Feet;
class Meters;

class Feet{
    private:
        double ft;
    public:
    Feet(){ft = 0.0;}
    Feet(double x){ft = x;}
    // Convert Meters class to Feet:
    Feet(Meters& m){
        double meters = m.meters();
        ft = meters / 0.3048;
    }


};
class Meters{
    private:
        float x;
    public:
        Meters(){ x = 0;}
        Meters(float y) { x = y;}
        // Converting from int Meters:
        Meters(int y){x = static_cast<float>(y);}
        float meters(){return x;};

        // Convert Class type to basic type:
        operator float();
        operator int();
        operator double();
};



void f(){
    cout << "\n****\n";
}
int main(){
    int x  = 9;
    f();
    cout << "int to float: " << float(x);
    f();
    // int to meters:
    Meters y = x;
    int conv1 = static_cast<int>(y);
    (float)y;
    (double)y;
    return 0;
    // Going from feet to meters:
    Feet ft = y;
}
    // Transform Class-Type to basic types:
Meters::operator float(){
    return static_cast<float>(this->x);
}
Meters::operator int(){
    std::cout << "\n***\n"
              << "ATTENTION: Conversion to int data type will round down the actual"
              <<  " meters value."
              << std::endl;
    return (int)(x);
}

Meters::operator double(){
        
    return (float)(this->x);
}
