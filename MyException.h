#pragma once
#include <iostream>

class myException : public std::domain_error
{
public:
    myException(const char* msg);
};