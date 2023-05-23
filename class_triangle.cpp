#include "class_figure.h"
#include "class_triangle.h"
#include "myException.h"

Triangle::Triangle()
{
    sides_count = 3;
    name = "Треугольник";
    length_side_a = 10;
    length_side_b = 20;
    length_side_c = 30;
    value_angle_A = 50;
    value_angle_B = 60;
    value_angle_C = 70;
};

Triangle::Triangle(int sides_count, std::string name, int length_side_a, int length_side_b, int length_side_c,
    int value_angle_A, int value_angle_B, int value_angle_C)
{
    if (sides_count != 3) {
        throw myException("Число сторон Фигуры не равно трём!");
    }
    else
    {
        this->sides_count = sides_count;
    }
    this->name = name;    
    this->length_side_a = length_side_a;
    this->length_side_b = length_side_b;
    this->length_side_c = length_side_c;
    this->value_angle_A = value_angle_A;
    this->value_angle_B = value_angle_B;
    this->value_angle_C = value_angle_C;

    if ( (value_angle_A + value_angle_B + value_angle_C) != 180) {
        throw myException("Сумма углов неравна 180 градосов!");
    }
    message();
};

int Triangle::get_lenght_side_a()
{
    return length_side_a;
};

int Triangle::get_lenght_side_b()
{
    return length_side_b;
};

int Triangle::get_lenght_side_c()
{
    return length_side_c;
};

int Triangle::get_value_angle_A()
{
    return value_angle_A;
};

int Triangle::get_value_angle_B()
{
    return value_angle_B;
};

int Triangle::get_value_angle_C()
{
    return value_angle_C;
};

void Triangle::message() {
    std::cout << get_name() << " (стороны " << get_lenght_side_a() << ", " << get_lenght_side_b() << ", " << get_lenght_side_c() << "; " <<
        "углы " << get_value_angle_A() << ", " << get_value_angle_B() << ", " << get_value_angle_C() << ") создан" << std::endl;
};