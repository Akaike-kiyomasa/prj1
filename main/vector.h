#include <iostream>
#include <string.h>

class Integer {
    public:
    int val;
    Integer(int val = 0) {
        this->val = val;
    }
    void setVal(int val) {
        this->val - val;
    }
};

// class IntegerWrapper{
//     public:
//     Integer val = 5;
//     IntegerWrapper() {
//         std::cout << "IntegerWrapper default constructor" << std::endl;
//     }
// };

class Point{
    private:
     double x, y;
    public: 
    //  double x, y;
        // Point() {
        //     x=0.0; y=0.0; std::cout << "default constructor" << std::endl;
        // }
        Point(double nx, double ny) {
            x=nx; y=ny; std::cout << "2-parameter constructor" << std::endl;
        }
        double getX() { return x;}
        double getY() { return y;}
        
        Point(Point &o) {
            x=o.x; y=o.y; std::cout << "custom copy constructor" << std::endl;
        }
        void offset(double offsetX, double offsetY);
        void print();
};

class MITStudent {
    public:
    int studentID;
    char *name;
    MITStudent() {
        studentID = 0;
        name = "";
    }
    MITStudent(MITStudent &o) {
        studentID = o.studentID;
        name = strdup(o.name);
        // name = o.name;
    }
};

class Vector{
    public:
    Point start, end;
    void offset(double offsetX, double offsetY);
    void print();  
};