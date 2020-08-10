#pragma once
#include <string>
#include "student.h"

class Student;

class Tutor
{
public:
    Tutor(std::string const &name) : _name{name} {}
    std::string getName() const { return _name; }
    std::string greet(Student const &student) const;

public:
    std::string _name;
};
