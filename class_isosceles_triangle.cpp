#include "class_figure.h"
#include "class_triangle.h"
#include "class_isosceles_triangle.h"
#include "myException.h"

Isosceles_triangle::Isosceles_triangle()
{
    name = "Равнобедренный треугольник";
    length_side_c = 10;
    value_angle_C = 50;
};

Isosceles_triangle::Isosceles_triangle(int sides_count, std::string name, int length_side_a, int length_side_b, int length_side_c,
    int value_angle_A, int value_angle_B, int value_angle_C)
{
    this->sides_count = sides_count;
    this->name = name;
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

    if (value_angle_A != value_angle_C) {
        throw myException("Углы А и С не равны!");
    }
    if (length_side_a != length_side_c)
    {
        throw myException("Стороны а и с не равны");
    }
    message();
};