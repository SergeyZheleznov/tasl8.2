#pragma once
class Right_triangle : public Triangle
{
public:
    Right_triangle();
    Right_triangle(int sides_count, std::string name, int length_side_a, int length_side_b, int length_side_c,
        int value_angle_A, int value_angle_B, int value_angle_C);
};