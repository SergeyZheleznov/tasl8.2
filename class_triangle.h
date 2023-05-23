#pragma once
class Triangle : public Figure
{
public:
    int length_side_a;
    int length_side_b;
    int length_side_c;
    int value_angle_A;
    int value_angle_B;
    int value_angle_C;

    Triangle();

    Triangle(int sides_count, std::string name, int length_side_a, int length_side_b, int length_side_c,
        int value_angle_A, int value_angle_B, int value_angle_C);

    int get_lenght_side_a();
    int get_lenght_side_b();
    int get_lenght_side_c();
    int get_value_angle_A();
    int get_value_angle_B();
    int get_value_angle_C();
    void message() override;
};