#include <iostream>
#include <string>

class Figure
{
protected:
    int sides_count = 0;
    int get_sides_count() { return sides_count; }
    std::string name = "Figure: ";
    std::string get_name() { return name; }
public:
    void method() 
    { 
        std::cout << name << sides_count << std::endl; 
    }
};
class Triangle : public Figure
{
public:
     void method1()
     {
        sides_count = 3;
        name = "Triangle: ";
        std::cout << name << sides_count << std::endl;  
    }
};
class Quadrangle : public Figure
{
public:
    void method2()
    {
        sides_count = 4;
        name = "Quadrangle: ";
        std::cout << name << sides_count << std::endl;
    }
};
int main()
{
    std::cout << "Number of sides:" << std::endl;
    Figure figure;
    figure.method();
    Triangle triangle;
    triangle.method1();
    Quadrangle quadrangle;
    quadrangle.method2();
}

