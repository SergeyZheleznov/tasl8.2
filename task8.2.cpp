#include "class_figure.h"
#include "MyException.h"
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

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    std::system("chcp 1251");

    try
    {
        Figure f(0, "������");

        Triangle tr(3, "T����������", 30, 30, 30, 60, 60, 60);

        Right_triangle rt(3, "������������� �����������", 30, 30, 39, 45, 45, 90);

        Isosceles_triangle itr(3, "�������������� �����������", 30, 30, 30, 60, 60, 60);

        Equilateral_triangle etr(3, "�������������� �����������", 30, 30, 30, 60, 60, 60);
           
        Quadrangle qv(4, "��������������", 30, 30, 30, 30, 90, 90, 90, 90);

        Rectangle1 rct(4, "�������������", 30, 30, 30, 30, 90, 90, 90, 90);

        Square sq(4, "�������", 30, 30, 30, 30, 90, 90, 90, 90);

        Parallelogram prl(4, "��������������", 30, 40, 30, 40, 150, 30, 150, 30);

        Rhombus rh(4, "����", 40, 40, 40, 40, 150, 30, 150, 30);

  } 
    catch(const myException& ex)
    {
        std::cout << "������ �������� ������. �������: " << ex.what() << std::endl;
    }
    return 0;
}
