#include "class_figure.h"
#include "myException.h"
Figure::Figure()
{ 
    sides_count = 0;
    name = "Фигура";
}

Figure::Figure(int sides_count, std::string name)
{
   if (sides_count != 0) {
       throw myException("Число сторон Фигуры не равно нулю!");
    }
    else
    {
        this->sides_count = sides_count;
        this->name = name;
        message();
    }
}

std::string Figure::get_name() { return name; };
int Figure::get_sides_count() { return sides_count; };
void Figure::message() {
    std::cout << "Название: " << get_name() << std::endl;
    std::cout << "Статус: создана" << std::endl;
    std::cout << "Число сторон: " << get_sides_count() << std::endl;
};
