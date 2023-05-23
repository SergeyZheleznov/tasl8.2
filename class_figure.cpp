#include "class_figure.h"
#include "myException.h"
Figure::Figure()
{ 
    sides_count = 0;
    name = "������";
}

Figure::Figure(int sides_count, std::string name)
{
   if (sides_count != 0) {
       throw myException("����� ������ ������ �� ����� ����!");
    }
    else
    {
        this->sides_count = sides_count;
        this->name = name;
        message();
    }
}

std::string Figure::get_name() { return name; };
int Figure::get_sides_count() { return sides_count; };
void Figure::message() {
    std::cout << "��������: " << get_name() << std::endl;
    std::cout << "������: �������" << std::endl;
    std::cout << "����� ������: " << get_sides_count() << std::endl;
};
