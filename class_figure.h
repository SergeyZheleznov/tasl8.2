#pragma once
#include <iostream>

class Figure {
public:
    int sides_count;
    std::string name;
    Figure();
    Figure(int sides_count, std::string name);

    std::string get_name();
    int get_sides_count();
    bool check();
    void print_info();
};