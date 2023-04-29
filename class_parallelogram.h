#pragma once
class Parallelogram : public Quadrangle
{
public:
    Parallelogram();

    Parallelogram(int sides_count, std::string name, int length_side_a, int length_side_b, int length_side_c, int length_side_d,
        int value_angle_A, int value_angle_B, int value_angle_C, int value_angle_D);
    void message_create();
};