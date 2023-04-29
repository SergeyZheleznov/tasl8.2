#pragma once
#include <iostream>

class Quadrangle : public Triangle
{
public:
    int length_side_d;
    int value_angle_D;
public:
    Quadrangle();
    Quadrangle(int sides_count, std::string name, int length_side_a, int length_side_b, int length_side_c, int length_side_d,
        int value_angle_A, int value_angle_B, int value_angle_C, int value_angle_D);

    int get_lenght_side_d();
    int get_value_angle_D();
    bool check();
    void print_info();
    void message_create();
};