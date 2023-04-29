#include "class_figure.h"
#include "class_triangle.h"
#include "class_equilateral_triangle.h"

Equilateral_triangle::Equilateral_triangle() {
    name = "Равносторонний треугольник";
    length_side_a = length_side_b = length_side_c = 30;
    value_angle_A = value_angle_B = value_angle_C = 60;
};

Equilateral_triangle::Equilateral_triangle(int sides_count, std::string name, int length_side_a, int length_side_b, int length_side_c,
    int value_angle_A, int value_angle_B, int value_angle_C)
{
    this->sides_count = sides_count;
    this->name = name;
    this->length_side_a = length_side_a;
    this->length_side_b = length_side_b;
    this->length_side_c = length_side_c;
    this->value_angle_A = value_angle_A;
    this->value_angle_B = value_angle_B;
    this->value_angle_C = value_angle_C;
};

void Equilateral_triangle::message_create() {
    int summ = get_value_angle_A() + get_value_angle_B() + get_value_angle_C();

    if (get_sides_count() != 3) {
        throw std::runtime_error(" число сторон не равно 3");
    }
    else if (summ != 180) {
        throw std::runtime_error(" сумма углов не равна 180");
    }
    else if (get_lenght_side_a() != get_lenght_side_c()) {
        throw std::runtime_error(" стороны a и c не равны");
    }
    else if (get_lenght_side_a() != get_lenght_side_b()) {
        throw std::runtime_error(" стороны a и b не равны");
    }
    else if (get_lenght_side_b() != get_lenght_side_c()) {
        throw std::runtime_error(" стороны b и c не равны");
    }
    else if (get_value_angle_A() != get_value_angle_C()) {
        throw std::runtime_error(" углы A и C не равны");
    }
    else if (get_value_angle_A() != get_value_angle_B()) {
        throw std::runtime_error(" углы A и B не равны");
    }
    else if (get_value_angle_B() != get_value_angle_C()) {
        throw std::runtime_error(" углы B и C не равны");
    }

    else
    {
        std::cout << get_name() << " (стороны " << get_lenght_side_a() << ", " << get_lenght_side_b() << ", " << get_lenght_side_c() << "; " <<
            "углы " << get_value_angle_A() << " , " << get_value_angle_B() << " , " << get_value_angle_C() << ") создан" << std::endl;
    }
};