#ifndef _GEO_H_
#define _GEO_H_


class Geometric_figures
{
protected:
   
    
public:
   // Փոփոխականների անունները սկսել "m_"֊ով
   // Encapsulation֊ի հիմնադրույթը ընդհանրապես պահպանված չի 
   
   // Perimeter, Area փոփոխակններ պետք չեն, բավարար է դրանք դինամիկ հաշվել և վերադարձնել
   // ընդամենը ունենալ double calcPerim() { return ... }
    double Perimeter = 0;
    double edge = 0;
    double Area = 0;
    double width = 0;
    double height = 0;
    double PI = 3.14;
    void show();

   // Պետք էր ունենալ calculate_perimetr ֆունկցիա, որը կգերբեռնվեր ամեն դասում,
   // Ոչ թե ծնողում ունենալ calculate_perimetr_triangle calculate_perimetr_elips և այլն
    double calculate_perimetr();
    double calculate_perimetr_triangle();
    double calculate_area_triangle();
    double calculate_area();
    double  calculate_perimetr_elips();
    double  calculate_area_elips();
    double  calculate_circle_perimetr();
    double  calculate_circle_area();

};
class Rectangle:public Geometric_figures{
    
    public:
    Rectangle() = default;
    Rectangle(double m_width,double m_heigth){
        width = m_width;
        height = m_heigth;
        calculate_perimetr();
        calculate_area();

    }
};
class Square:public Geometric_figures{    
    public:
    Square() = default;
    Square(double m_width,double m_heigth){
        width = m_width;
        height = m_heigth;
        if(width == height){
            calculate_perimetr();
            calculate_area();
        }
    }
};
class Triangle:public Geometric_figures{
public:
    Triangle() = default;
    Triangle(double m_width,double m_heigth, double m_edge){
    width = m_width,
    height = m_heigth,
    edge = m_edge; 
    calculate_perimetr_triangle();
    calculate_area_triangle();
    }
};

class Elips:public Geometric_figures{
private:

public:
    Elips() = default;
    Elips(double m_width,double m_heigth){
    width = m_width,
    height = m_heigth,
    calculate_perimetr_elips();
    calculate_area_elips();
    }
};



class Circle:public Elips{
public:
    Circle() = default;
    Circle(double m_width){
    width = m_width;
    calculate_circle_perimetr();
    calculate_circle_area();    
    }
};








#endif
