#include<iostream>

class Geometric_figures
{
private:
    double Perimeter;
    double Area;
public:
    double calculate_perimetr(double, double){};
    double calculate_surface(){};
};

class Rectangle:public Geometric_figures{
    private:
    double width;
    double height;

    public:
    void foo(){
    Geometric_figures::calculate_perimetr(double width,double height){
        return 2*(this->height + this->width); 
    }
    
    }
}