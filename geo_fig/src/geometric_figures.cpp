
#include"geometric_figures.hpp"
#include<iostream>



void Geometric_figures::show(){
    std::cout<<this->Perimeter<<"  "<<this->Area<<std::endl;
    };

double Geometric_figures::calculate_perimetr(){
       this->Perimeter = (2*(this->width + this->height));      
       return this->Perimeter;
    };
double Geometric_figures::calculate_area(){
       this->Area = this->width * this->height;      
       return this->Area;
    }; 


double Geometric_figures::calculate_perimetr_triangle(){
       Perimeter = this->edge + this->width + this->height;      
       return Perimeter;
    };

double Geometric_figures::calculate_area_triangle(){
        Area =  0.5 * ((Perimeter / 2*(Perimeter / 2 - width))*(Perimeter / 2 - height)) * (Perimeter / 2 - edge);
       return Area;
    };


double Geometric_figures::calculate_area_elips(){
       Area =  PI * width * height;
       return Area;
    };


double Geometric_figures::calculate_perimetr_elips(){
        Perimeter = PI * (width + height);
       return Perimeter;
    };


double Geometric_figures::calculate_circle_area()
{
    Perimeter = 2 * PI * width;
    return Perimeter;
}

double Geometric_figures::calculate_circle_perimetr()
{
    Area = PI * width * width;
    return Area;
}


