#include "class_figure.h"
#include "class_triangle.h"
#include "class_quadrangle.h"
#include "myException.h"

Quadrangle::Quadrangle()
{
    sides_count = 4;
    name = "��������������";
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
    if (sides_count != 4) {
        throw myException("����� ������ �� ����� ������");
    }
    this->length_side_a = length_side_a;
    this->length_side_b = length_side_b;
    this->length_side_c = length_side_c;
    this->length_side_d = length_side_d;
    this->value_angle_A = value_angle_A;
    this->value_angle_B = value_angle_B;
    this->value_angle_C = value_angle_C;
    this->value_angle_D = value_angle_D;

    if ((value_angle_A + value_angle_B + value_angle_C + value_angle_D) != 360) {
        throw myException("����� ����� �� ����� 360 ��������!");
    }

    message();
};

int Quadrangle::get_lenght_side_d()
{
    return length_side_d;
};

int  Quadrangle::get_value_angle_D()
{
    return value_angle_D;
};

void Quadrangle::message() {
    std::cout << get_name() << " (������� " << get_lenght_side_a() << ", " << get_lenght_side_b() << ", " << get_lenght_side_c() << "; " << get_lenght_side_d() << "; " <<
    "���� " << get_value_angle_A() << ", " << get_value_angle_B() << ", " << get_value_angle_C() << ", " << get_value_angle_D() << ") ������" << std::endl;
};