#include "class_figure.h"
#include "class_triangle.h"
#include "class_quadrangle.h"

Quadrangle::Quadrangle()
{
    sides_count = 4;
    name = "Четырёхугольник";
    length_side_a = 10;
    length_side_b = 20;
    length_side_c = 30;
    length_side_d = 40;
    value_angle_A = 50;
    value_angle_B = 60;
    value_angle_C = 70;
    value_angle_D = 80;
}

Quadrangle::Quadrangle(int sides_count, std::string name, int length_side_a, int length_side_b, int length_side_c, int length_side_d,
    int value_angle_A, int value_angle_B, int value_angle_C, int value_angle_D)
{
    this->sides_count = sides_count;
    this->name = name;
    this->length_side_a = length_side_a;
    this->length_side_b = length_side_b;
    this->length_side_c = length_side_c;
    this->length_side_d = length_side_d;
    this->value_angle_A = value_angle_A;
    this->value_angle_B = value_angle_B;
    this->value_angle_C = value_angle_C;
    this->value_angle_D = value_angle_D;
};

int Quadrangle::get_lenght_side_d()
{
    return length_side_d;
};

int  Quadrangle::get_value_angle_D()
{
    return value_angle_D;
};

bool  Quadrangle::check() {
    if (((length_side_a == length_side_b) && (length_side_b == length_side_c) && (length_side_c == length_side_d) && (length_side_a == length_side_d)) &&
        ((value_angle_A == value_angle_B) && (value_angle_B == value_angle_C) && (value_angle_C == value_angle_D) && (value_angle_A == value_angle_D)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
};

void  Quadrangle::print_info() {
    std::cout << get_name() << std::endl;
    if (check() == 1) {
        std::cout << "Правильная" << std::endl;
    }
    else {
        std::cout << "Неправильная" << std::endl;
    }
    std::cout << "Количество сторон: " << get_sides_count() << std::endl;
    std::cout << "Стороны: " << " a = " << get_lenght_side_a() << " b = " << get_lenght_side_b() << " c = " << get_lenght_side_c() <<
        " d = " << get_lenght_side_d() << std::endl;
    std::cout << "Углы: " << " А = " << get_value_angle_A() << " B = " << get_value_angle_B() << " C = " << get_value_angle_C() <<
        " D = " << get_value_angle_D() << std::endl << std::endl;
};

void Quadrangle::message_create() {
    int summ = get_value_angle_A() + get_value_angle_B() + get_value_angle_C() + get_value_angle_D();

    if (get_sides_count() != 4) {
        throw std::runtime_error(" число сторон не равно 3");
    }
    else if (summ != 360) {
        throw std::runtime_error(" сумма углов не равна 360");
    }

    else
    {
        std::cout << get_name() << " (стороны " << get_lenght_side_a() << ", " << get_lenght_side_b() << ", " << get_lenght_side_c() << "; " << get_lenght_side_d() << "; " <<
            "углы " << get_value_angle_A() << " , " << get_value_angle_B() << " , " << get_value_angle_C() << " , " << get_value_angle_D() << ") создан" << std::endl;
    }
};