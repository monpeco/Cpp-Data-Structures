#include<iostream>
using namespace std;

class Shape{
    protected:
        int width, heigth;
    
    public:
        Shape(int w=0, int h=0){
            width = w;
            heigth = h;
        }
        
        virtual int area(){
            std::cout << "Shape method" << endl;
            return 0;
        }
    
};

class Rectangle : public Shape{
    public:
        Rectangle(int w = 0, int h = 0) : Shape(w,h){ 

        }
        
        int area(){
            std::cout << "Rectangle area" << endl;
            return width*heigth;
        }
};

class Triangle : public Shape{
    public:
        Triangle(int w = 0, int h = 0) : Shape(w,h){
            
        }
        
        int area(){
            std::cout << "Triangle area" << endl;
            return width*heigth/2;
        }
};


int main(){
    
    Shape* ptrsh;
    Shape sh1;
    Rectangle re(2,4);
    Triangle tr(3,5);
    
    std::cout << "Calling the method choose at runtime" << endl;

    sh1.area();     //execute base method
    
    ptrsh = &re;       //store Rectangle's address
    ptrsh->area();     //execute Rectangle->area()
    
    ptrsh = &tr;       //store Triangle
    ptrsh->area();     //execute Triangle->area()


    return 0;
}