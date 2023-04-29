#include "class_figure.h"
#include "class_triangle.h"
#include "class_right_triangle.h"
#include "class_isosceles_triangle.h"
#include "class_equilateral_triangle.h"
#include "class_quadrangle.h"
#include "class_parallelogram.h"
#include "class_rectangle1.h"
#include "rhombus.h"
#include "square.h"
#include <iostream>
#include <windows.h>
#include <string>

/*
class acosException : public std::exception
{
protected:
    std::string errorMsg;
public:
    acosException(double x)
    {
        std::string value = std::to_string(x);
        errorMsg = "Arccos failed, argument " + value + " is out of range!";
    }
    virtual const char* what() const override
    {
        return errorMsg.c_str();
    }
};
*/

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    std::system("chcp 1251");

    try {
        Triangle tr(3, "Tреугольник", 30, 30, 30, 60, 60, 60);
        tr.message_create();
      
        Right_triangle rt(3, "Прямоугольный треугольник", 30, 30, 39, 45, 45, 90);
        rt.message_create();

        Isosceles_triangle itr(3, "Равнобедренный треугольник", 30, 30, 30, 60, 60, 60);
        itr.message_create();

        Equilateral_triangle etr(3, "Равносторонний треугольник", 30, 30, 30, 60, 60, 60);
        etr.message_create();
        
        Quadrangle qv(4, "Четырёхугольник", 30, 30, 30, 30, 90, 90, 90, 90);
        qv.message_create();

        Rectangle1 rct(4, "Прямоугольник", 30, 30, 30, 30, 90, 90, 90, 90);
        rct.message_create();

        Square sq(4, "Квадрат", 30, 30, 30, 30, 90, 90, 90, 90);
        sq.message_create();

        Parallelogram prl(4, "Параллелограмм", 30, 40, 30, 40, 150, 30, 150, 30);
        prl.message_create();

        Rhombus rh(4, "Ромб", 40, 40, 40, 40, 150, 30, 150, 30);
        rh.message_create();
    }
     
    catch (const std::exception& e)
    {
        std::cout << "Ошибка создания фигуры. Причина:" << e.what() << std::endl;
    }
    return 0;
}


