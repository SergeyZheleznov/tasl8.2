#include "class_figure.h"
Figure::Figure() { sides_count = 0; name = "Фигура"; }

Figure::Figure(int sides_count, std::string name)
{
    this->sides_count = sides_count;
    this->name = name;
}

std::string Figure::get_name() { return name; };
int Figure::get_sides_count() { return sides_count; };
bool Figure::check() { return 1; };
void Figure::print_info() {
    std::cout << get_name() << std::endl;
    if (check() == 1) {
        std::cout << "Правильная" << std::endl;
    }
    else {
        std::cout << "Неправильная" << std::endl;
    }
    std::cout << "Количество сторон: " << get_sides_count() << std::endl << std::endl;
};