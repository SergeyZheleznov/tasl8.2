#include "class_figure.h"
#include "class_triangle.h"
#include "class_quadrangle.h"
#include "class_parallelogram.h"
#include "rhombus.h"

Rhombus::Rhombus()
{
    name = "–омб";
    length_side_a;
    length_side_b;
    length_side_c;
    length_side_d;
    value_angle_A;
    value_angle_B;
    value_angle_C;
    value_angle_D;
};

Rhombus::Rhombus(int sides_count, std::string name, int length_side_a, int length_side_b, int length_side_c, int length_side_d,
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

void Rhombus::message_create() {
    int summ = get_value_angle_A() + get_value_angle_B() + get_value_angle_C() + get_value_angle_D();

    if (get_sides_count() != 4) {
        throw std::runtime_error(" число сторон не равно 4");
    }
    else if (summ != 360) {
        throw std::runtime_error(" сумма углов не равна 360");
    }

    else if ((get_lenght_side_a() != get_lenght_side_b()) || (get_lenght_side_a() != get_lenght_side_c()) || (get_lenght_side_a() != get_lenght_side_d()) ||
        (get_lenght_side_b() != get_lenght_side_d() || (get_lenght_side_c() != get_lenght_side_d())))
    {
        throw std::runtime_error(" не все стороны равны");
    }

    else if ((get_value_angle_A() != get_value_angle_C()) || (get_value_angle_B() != get_value_angle_D())) {
        throw std::runtime_error(" углы A,C и B,D попарно не равны");
    }

    else
    {
        std::cout << get_name() << " (стороны " << get_lenght_side_a() << ", " << get_lenght_side_b() << ", " << get_lenght_side_c() << "; " << get_lenght_side_d() << "; " <<
            "углы " << get_value_angle_A() << " , " << get_value_angle_B() << " , " << get_value_angle_C() << " , " << get_value_angle_D() << ") создан" << std::endl;
    }
};